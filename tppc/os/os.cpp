#include <dolphin/os.h>
#include <dolphin/vi.h>
#include <dolphin/base/PPCArch.h>
#include <fmt/base.h>
#include <cstdlib>
#include <cstdarg>
#include <cstdio>

#include "os_impl.hpp"

void OSPanic(const char* file, int line, const char* msg, ...) {
    fmt::print("ABORT [{}:{}] {}\n", file, line, msg);
    fflush(stdout);
    abort();
}

void OSReport_Warning(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    fputs("WARNING: ", stdout);
    vprintf(fmt, args);
    va_end(args);
}

void OSReport_Error(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    fputs("ERROR: ", stdout);
    vprintf(fmt, args);
    va_end(args);
}

void OSReport_FatalError(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    fputs("FATAL: ", stdout);
    vprintf(fmt, args);
    va_end(args);

    abort();
}

void OSReport(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}

void OSReport_System(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    fflush(stdout);
    va_end(args);
}

void OSAttention(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}


void OSReportDisable(void) {
    UNIMPLEMENTED();
}
void OSReportEnable(void) {
    UNIMPLEMENTED();
}

void OSResetSystem(int reset, u32 resetCode, BOOL forceMenu) {
    UNIMPLEMENTED();
}

u32 OSGetResetCode() {
    return OS_RESET_RESTART;
}

void OSInitStopwatch(OSStopwatch* sw, char* name) {
    UNIMPLEMENTED();
}
void OSStartStopwatch(OSStopwatch* sw) {
    UNIMPLEMENTED();
}
void OSStopStopwatch(OSStopwatch* sw) {
    UNIMPLEMENTED();
}
OSTime OSCheckStopwatch(OSStopwatch* sw) {
    UNIMPLEMENTED();
}
void OSResetStopwatch(OSStopwatch* sw) {
    UNIMPLEMENTED();
}
void OSDumpStopwatch(OSStopwatch* sw) {
    UNIMPLEMENTED();
}

void OSLockMutex(OSMutex* mutex) {
    SOFT_UNIMPLEMENTED();
}

void OSInitMutex(OSMutex* mutex) {
    SOFT_UNIMPLEMENTED();
}

void OSUnlockMutex(OSMutex* mutex) {
    SOFT_UNIMPLEMENTED();
}

BOOL OSTryLockMutex(OSMutex* mutex) {
    UNIMPLEMENTED();
    return 0;

}

void OSInitCond(OSCond* cond) {
    SOFT_UNIMPLEMENTED();
}

void OSWaitCond(OSCond* cond, OSMutex* mutex) {
    SOFT_UNIMPLEMENTED();
}

void OSSignalCond(OSCond* cond) {
    SOFT_UNIMPLEMENTED();
}

void DCInvalidateRange(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}
void DCFlushRange(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}
void DCStoreRange(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}
void DCFlushRangeNoSync(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}
void DCStoreRangeNoSync(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}
void DCZeroRange(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}
void DCTouchRange(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}
void ICInvalidateRange(void* addr, u32 nBytes) {
    UNIMPLEMENTED();
}

void LCEnable(void) {
    UNIMPLEMENTED();
}
void LCDisable(void) {
    UNIMPLEMENTED();
}
void LCLoadBlocks(void* destTag, void* srcAddr, u32 numBlocks) {
    UNIMPLEMENTED();
}
void LCStoreBlocks(void* destAddr, void* srcTag, u32 numBlocks) {
    UNIMPLEMENTED();
}
u32 LCLoadData(void* destAddr, void* srcAddr, u32 nBytes) {
    UNIMPLEMENTED();
}
u32 LCStoreData(void* destAddr, void* srcAddr, u32 nBytes) {
    UNIMPLEMENTED();
}
u32 LCQueueLength(void) {
    UNIMPLEMENTED();
}
void LCQueueWait(u32 len) {
    UNIMPLEMENTED();
}
void LCFlushQueue(void) {
    UNIMPLEMENTED();
}
void __OSCacheInit(void) {
    UNIMPLEMENTED();
}

BOOL OSEnableInterrupts(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
BOOL OSDisableInterrupts(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
BOOL OSRestoreInterrupts(BOOL level) {
    SOFT_UNIMPLEMENTED();
    return 0;
}

u32 OSGetSoundMode(void) {
    UNIMPLEMENTED();
}
void OSSetSoundMode(u32 mode) {
    UNIMPLEMENTED();
}
u32 OSGetVideoMode(void) {
    UNIMPLEMENTED();
}
void OSSetVideoMode(u32 mode) {
    UNIMPLEMENTED();
}
u8 OSGetLanguage(void) {
    UNIMPLEMENTED();
}
void OSSetLanguage(u8 language) {
    UNIMPLEMENTED();
}
u16 OSGetGbsMode(void) {
    UNIMPLEMENTED();
}
void OSSetGbsMode(u16 mode) {
    UNIMPLEMENTED();
}
u32 OSGetProgressiveMode(void) {
    UNIMPLEMENTED();
}
void OSSetProgressiveMode(u32 on) {
    SOFT_UNIMPLEMENTED();
}
u32 OSGetEuRgb60Mode(void) {
    UNIMPLEMENTED();
}
void OSSetEuRgb60Mode(u32 on) {
    UNIMPLEMENTED();
}
u16 OSGetWirelessID(s32 chan) {
    UNIMPLEMENTED();
}
void OSSetWirelessID(s32 chan, u16 id) {
    UNIMPLEMENTED();
}

u32 OSGetConsoleType(void) {
    return OS_CONSOLE_PC_EMULATOR;
}

void OSInit(void) {
    SOFT_UNIMPLEMENTED();
}

void OSRegisterVersion(const char* id) {
    UNIMPLEMENTED();
}

void OSInitThreadQueue(OSThreadQueue* queue) {
    queue->head = queue->tail = nullptr;
}

void OSSleepThread(OSThreadQueue* queue) {
    SOFT_UNIMPLEMENTED();
}
void OSWakeupThread(OSThreadQueue* queue) {
    SOFT_UNIMPLEMENTED();
}
s32 OSSuspendThread(OSThread* thread) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
s32 OSResumeThread(OSThread* thread) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
s32 OSEnableScheduler(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
s32 OSDisableScheduler(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
void OSCancelThread(OSThread* thread) {
    UNIMPLEMENTED();
}
void OSClearStack(u8 val) {
    UNIMPLEMENTED();
}
BOOL OSIsThreadSuspended(OSThread* thread) {
    UNIMPLEMENTED();
}
BOOL OSIsThreadTerminated(OSThread* thread) {
    UNIMPLEMENTED();
}
void OSYieldThread(void) {
    UNIMPLEMENTED();
}
int OSCreateThread(OSThread* thread, void* (*func)(void*), void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr) {
    SOFT_UNIMPLEMENTED();
    return 1;
}
void OSExitThread(void* val) {
    UNIMPLEMENTED();
}
int OSJoinThread(OSThread* thread, void* val) {
    UNIMPLEMENTED();
}
void OSDetachThread(OSThread* thread) {
    UNIMPLEMENTED();
}
int OSSetThreadPriority(OSThread* thread, OSPriority priority) {
    UNIMPLEMENTED();
}
s32 OSGetThreadPriority(OSThread* thread) {
    return thread->priority;
}
OSThread* OSSetIdleFunction(OSIdleFunction idleFunction, void* param, void* stack, u32 stackSize) {
    UNIMPLEMENTED();
}
OSThread* OSGetIdleFunction(void) {
    UNIMPLEMENTED();
}
s32 OSCheckActiveThreads(void) {
    UNIMPLEMENTED();
}
void OSSetThreadSpecific(s32 index, void* ptr) {
    UNIMPLEMENTED();
}
void* OSGetThreadSpecific(s32 index) {
    UNIMPLEMENTED();
}

void OSInitMessageQueue(OSMessageQueue* mq, void* msgArray, s32 msgCount) {
    OSInitThreadQueue(&mq->queueSend);
    OSInitThreadQueue(&mq->queueReceive);
    mq->msgArray = msgArray;
    mq->msgCount = msgCount;
    mq->firstIndex = 0;
    mq->usedCount = 0;
}
int OSSendMessage(OSMessageQueue* mq, void* msg, s32 flags) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
int OSReceiveMessage(OSMessageQueue* mq, void* msg, s32 flags) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
int OSJamMessage(OSMessageQueue* mq, void* msg, s32 flags) {
    SOFT_UNIMPLEMENTED();
    return 0;
}

BOOL OSCheckAlarmQueue(void) {
    UNIMPLEMENTED();
}
void OSInitAlarm(void) {
    SOFT_UNIMPLEMENTED();
}
void OSCreateAlarm(OSAlarm* alarm) {
    SOFT_UNIMPLEMENTED();
}
void OSSetAlarm(OSAlarm* alarm, OSTime tick, OSAlarmHandler handler) {
    SOFT_UNIMPLEMENTED();
}
void OSSetAbsAlarm(OSAlarm* alarm, OSTime time, OSAlarmHandler handler) {
    SOFT_UNIMPLEMENTED();
}
void OSSetPeriodicAlarm(OSAlarm* alarm, OSTime start, OSTime period, OSAlarmHandler handler) {
    SOFT_UNIMPLEMENTED();
}
void OSCancelAlarm(OSAlarm *alarm) {
    SOFT_UNIMPLEMENTED();
}
void OSSetAlarmTag(OSAlarm* alarm, u32 tag) {
    UNIMPLEMENTED();
}
void OSCancelAlarms(u32 tag) {
    UNIMPLEMENTED();
}

void OSProtectRange(u32 chan, void* addr, u32 nBytes, u32 control) {
    UNIMPLEMENTED();
}
u32 OSGetPhysicalMemSize(void) {
    UNIMPLEMENTED();
}
u32 OSGetConsoleSimulatedMemSize(void) {
    UNIMPLEMENTED();
}

u32 OSGetStackPointer(void) {
    UNIMPLEMENTED();
}
void OSDumpContext(OSContext* context) {
    UNIMPLEMENTED();
}
void OSLoadContext(OSContext* context) {
    UNIMPLEMENTED();
}
u32 OSSaveContext(OSContext* context) {
    UNIMPLEMENTED();
}
void OSClearContext(OSContext* context) {
    UNIMPLEMENTED();
}
OSContext* OSGetCurrentContext(void) {
    UNIMPLEMENTED();
}
void OSSetCurrentContext(OSContext* context) {
    UNIMPLEMENTED();
}
void OSLoadFPUContext(OSContext* fpucontext) {
    UNIMPLEMENTED();
}
void OSSaveFPUContext(OSContext* fpucontext) {
    UNIMPLEMENTED();
}
u32 OSSwitchStack(u32 newsp) {
    UNIMPLEMENTED();
}
int OSSwitchFiber(u32 pc, u32 newsp) {
    UNIMPLEMENTED();
}
void OSInitContext(OSContext* context, u32 pc, u32 newsp) {
    UNIMPLEMENTED();
}
void OSFillFPUContext(OSContext* context) {
    UNIMPLEMENTED();
}

OSErrorHandler OSSetErrorHandler(OSError error, OSErrorHandler handler) {
    SOFT_UNIMPLEMENTED();
    return nullptr;
}

u32 __OSFpscrEnableBits;
OSErrorHandler __OSErrorTable[17];

void OSSetStringTable(void* stringTable) {
    UNIMPLEMENTED();
}
BOOL OSLink(OSModuleInfo* newModule, void* bss) {
    UNIMPLEMENTED();
}
BOOL OSLinkFixed(OSModuleInfo* newModule, void* bss) {
    UNIMPLEMENTED();
}

void OSSetSaveRegion(void* start, void* end) {
    UNIMPLEMENTED();
}
void OSGetSaveRegion(void** start, void** end) {
    UNIMPLEMENTED();
}
void OSGetSavedRegion(void** start, void** end) {
    UNIMPLEMENTED();
}
void __OSReboot(u32 resetCode, u32 bootDol) {
    UNIMPLEMENTED();
}

OSSwitchThreadCallback OSSetSwitchThreadCallback(OSSwitchThreadCallback callback) {
    SOFT_UNIMPLEMENTED();
    return nullptr;
}

OSResetCallback OSSetResetCallback(OSResetCallback callback) {
    UNIMPLEMENTED();
}
BOOL OSGetResetSwitchState(void) {
    return FALSE;
}
BOOL OSGetResetButtonState(void) {
    UNIMPLEMENTED();
}
BOOL OSUnlink(OSModuleInfo* oldModule) {
    UNIMPLEMENTED();
}