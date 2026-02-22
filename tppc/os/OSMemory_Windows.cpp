#ifdef _WIN32

#define WIN32_LEAN_AT_LEAST
#include <Windows.h>

#include <cassert>
#include <fmt/base.h>

#include "global.h"
#include "os_impl.hpp"

DWORD GetAllocationGranularity() {
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);

    return sysInfo.dwAllocationGranularity;
}

void TryGuardRegion(const uintptr_t start, const uintptr_t end, char const* const name) {
#if TPPC_DEBUG
    assert(start != 0);

    const auto addr = VirtualAlloc(
        reinterpret_cast<LPVOID>(start),
        end - start,
        MEM_RESERVE,
        PAGE_NOACCESS);

    if (addr == nullptr) {
        fmt::println("Unable to guard memory region: {}", name);
    } else {
        assert(addr == reinterpret_cast<LPVOID>(start));
        fmt::println("Successfully guarded memory range: {:08X}-{:08X} ({})", start, end, name);
    }

#endif
}

void GuardGCMemory() {
    // Reserve the normal GC memory map so accesses are guaranteed to fail.
    // https://www.gc-forever.com/yagcd/chap5.html#sec5.11

    // We can't quite map at address 0 (for good reasons) but we *can* map at the next granularity over!
    TryGuardRegion(0x00000000 + GetAllocationGranularity(), 0x017fffff, "Physical");
    TryGuardRegion(0x80000000, 0x817fffff, "Logical (cached)");
    TryGuardRegion(0xC0000000, 0xC17fffff, "Logical (uncached)");
    TryGuardRegion(0xC8000000, 0xC8200000, "EFB");
    TryGuardRegion(0xCC000000, 0xCC008020, "Hardware registers");
    TryGuardRegion(0xe0000000, 0xe0003fff, "L2 cache");
    TryGuardRegion(0xfff00000, 0xffffffff, "IPL");
}

void* RealMemoryStart = nullptr;
void* RealMemoryEnd = nullptr;

void AllocRealMemory() {
    // TODO: Allocate in such a way that the lower 32-bits contain 0x80000000,
    // so that if a pointer gets truncated, it will fall in the guard pages.
    RealMemoryStart = VirtualAlloc(
        nullptr,
        REAL_MEMORY_SIZE,
        MEM_RESERVE | MEM_COMMIT,
        PAGE_READWRITE);

    RealMemoryEnd = POINTER_ADD(RealMemoryStart, REAL_MEMORY_SIZE);

    OSSetArenaLo(POINTER_ADD(RealMemoryStart, ARENA_START_OFFSET));
    OSSetArenaHi(RealMemoryEnd);

    fmt::println(
        "Allocated real memory ({} MiB) at address {:016X}",
        REAL_MEMORY_SIZE_MB,
        reinterpret_cast<uintptr_t>(RealMemoryStart));
}

void TPPC_OSInitMemory() {
    GuardGCMemory();
    AllocRealMemory();
    TPPC_FillBootInfo();
}

#endif
