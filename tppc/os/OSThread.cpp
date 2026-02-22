#include "dolphin/os/OSThread.h"

static OSThread* CurrentThread;
static OSThread DefaultThread;

void TPPC_InitMainThread() {
    auto thread = &DefaultThread;

    CurrentThread = thread;

    thread->state = OS_THREAD_STATE_RUNNING;
}

OSThread* OSGetCurrentThread(void) {
    return CurrentThread;
}
