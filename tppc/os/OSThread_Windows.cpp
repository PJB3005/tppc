#if _WIN32

#include "dolphin/os/OSThread.h"

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

#include <limits>

#include "os_impl.hpp"

static OSThread DefaultThread;

static DWORD tlsIndex;

constexpr u8 ThreadStartQueueMax = 16;

static bool CanImmediateStartThread = false;
static HANDLE ThreadStartQueue[ThreadStartQueueMax];
static u8 ThreadStartIndex = 0;

void TPPC_InitMainThread() {
    tlsIndex = TlsAlloc();

    const auto thread = &DefaultThread;

    thread->suspend = 0;

    TlsSetValue(tlsIndex, thread);
}

OSThread* OSGetCurrentThread(void) {
    return static_cast<OSThread*>(TlsGetValue(tlsIndex));
}

DWORD MapExitCode(void* exitCode) {
    if (reinterpret_cast<uintptr_t>(exitCode) > std::numeric_limits<DWORD>::max()) {
        UNIMPLEMENTED();
    }

    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(exitCode));
}

struct ThreadStartData {
    OSThread* thread;
    void* (*func)(void*);
    void* param;
};

DWORD WINAPI StartThreadProc(LPVOID lpParameter) {
    const auto start_data = static_cast<ThreadStartData*>(lpParameter);
    TlsSetValue(tlsIndex, start_data->thread);
    const auto result = start_data->func(start_data->param);
    return MapExitCode(result);
}

int OSCreateThread(OSThread* thread, void* (*func)(void*), void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr) {
    thread->stackBase = static_cast<u8*>(stack);
    thread->stackEnd = reinterpret_cast<u32*>(static_cast<u8*>(stack) + stackSize);
    thread->suspend = 1;

    if (stackSize < sizeof(ThreadStartData)) {
        OSReport_FatalError("Thread is too small!");
    }

    *static_cast<ThreadStartData*>(stack) = {
        thread,
        func,
        param
    };

    const auto result = CreateThread(
        nullptr,
        stackSize * 2,
        StartThreadProc,
        stack,
        CREATE_SUSPENDED,
        nullptr
    );

    if (result == nullptr) {
        OSReport_FatalError("Failed to create Win32 thread");
    }

    thread->val = result;

    return 1;
}

void OSSetThreadName(OSThread* thread, const char* name) {
    wchar_t buffer[256];
    const auto converted = MultiByteToWideChar(
        CP_UTF8,
        0,
        name,
        -1,
        buffer,
        sizeof(buffer)/sizeof(wchar_t));
    if (converted == 0) {
        OSReport_FatalError("OSSetThreadName: MultiByteToWideChar failed");
    }

    const auto result = SetThreadDescription(thread->val, buffer);
    if (!SUCCEEDED(result)) {
        OSReport_FatalError("OSSetThreadName: SetThreadDescription failed");
    }
}

void OSExitThread(void* val) {
    ExitThread(MapExitCode(val));
}

s32 OSSuspendThread(OSThread* thread) {
    thread->suspend += 1;
    if (thread->suspend == 1) {
        SuspendThread(thread->val);
    }

    if (!CanImmediateStartThread) {
        OSReport_FatalError("Can't suspend threads this early!");
    }

    return thread->suspend;
}

s32 OSResumeThread(OSThread* thread) {
    thread->suspend -= 1;
    if (thread->suspend < 0) {
        thread->suspend = 0;
    } else if (thread->suspend == 0) {
        if (!CanImmediateStartThread) {
            if (ThreadStartIndex >= ThreadStartQueueMax) {
                OSReport_FatalError("Started too many threads too early!");
            } else {
                ThreadStartQueue[ThreadStartIndex++] = thread->val;
            }
        } else {
            ResumeThread(thread->val);
        }
    }

    return thread->suspend;
}

void OSThreadsReady() {
    // Okay so basically:
    // the normal Dolphin scheduler, while preemptive, is very die-hard on thread priorities.
    // this means that all the threads started by the game on startup,
    // like the DVD thread, do not get to start until the game first sleeps waiting on vblank
    // or whatever.
    // Turns out there's a race condition here if you do let them! They'll clobber the global heap
    // and replace it with an assert heap.
    // So we just delay starting other threads until the game signals ready.
    CanImmediateStartThread = true;

    for (auto i = 0; i < ThreadStartIndex; i++) {
        ResumeThread(ThreadStartQueue[i]);
    }
}

#endif
