#include <dolphin/ar.h>

#include <Windows.h>

#include <cassert>

#include "../os/os_impl.hpp"

constexpr u32 ARAM_BASE_ADDRESS = 0;
constexpr u32 ARAM_SIZE = 16 * 1024 * 1024;

static void* ARamBase = nullptr;

static u32 __AR_StackPointer;
static u32 __AR_FreeBlocks;
static u32*  __AR_BlockLength;
static BOOL __AR_init_flag;

u32 ARInit(u32* stack_index_addr, u32 num_entries) {
    if (__AR_init_flag == TRUE) {
        return ARAM_BASE_ADDRESS;
    }

    ARamBase = malloc(ARAM_SIZE);

    __AR_StackPointer = ARAM_BASE_ADDRESS;
    __AR_FreeBlocks = num_entries;
    __AR_BlockLength = stack_index_addr;

    __AR_init_flag = true;

    return __AR_StackPointer;
}

ARQCallback ARRegisterDMACallback(ARQCallback callback) {
    UNIMPLEMENTED();
}
u32 ARGetDMAStatus(void) {
    UNIMPLEMENTED();
}
void ARStartDMA(u32 type, u32 mainmem_addr, u32 aram_addr, u32 length) {
    UNIMPLEMENTED();
}

u32 ARAlloc(u32 length) {
    u32 tmp;
    BOOL old;

    old = OSDisableInterrupts();
    ASSERTMSGLINE(430, !(length & 0x1F), "ARAlloc(): length is not multiple of 32bytes!");
    ASSERTMSGLINE(434, length <= (__AR_Size - __AR_StackPointer), "ARAlloc(): Out of ARAM!");
    ASSERTMSGLINE(435, __AR_FreeBlocks, "ARAlloc(): No more free blocks!");

    tmp = __AR_StackPointer;
    __AR_StackPointer += length;
    *__AR_BlockLength = length;
    __AR_BlockLength += 1;
    __AR_FreeBlocks -= 1;
    OSRestoreInterrupts(old);
    return tmp;
}

u32 ARFree(u32* length) {
    BOOL old;

    old = OSDisableInterrupts();
    __AR_BlockLength -= 1;
    if (length) {
        *length = *__AR_BlockLength;
    }
    __AR_StackPointer -= *__AR_BlockLength;
    __AR_FreeBlocks += 1;
    OSRestoreInterrupts(old);
    return __AR_StackPointer;
}

BOOL ARCheckInit(void) {
    return __AR_init_flag;
}

void ARReset(void) {
    UNIMPLEMENTED();
}
void ARSetSize(void) {
    UNIMPLEMENTED();
}
u32 ARGetBaseAddress(void) {
    return ARAM_BASE_ADDRESS;
}
u32 ARGetSize(void) {
    return ARAM_SIZE;
}
u32 ARGetInternalSize(void) {
    UNIMPLEMENTED();
}
void ARClear(u32 flag) {
    UNIMPLEMENTED();
}

void ARQInit(void) {
    SOFT_UNIMPLEMENTED();
}
void ARQReset(void) {
    SOFT_UNIMPLEMENTED();
}
void ARQPostRequest(ARQRequest* request, u32 owner, u32 type, u32 priority, u32 source, u32 dest, u32 length, ARQCallback callback) {
    UNIMPLEMENTED();
}
void ARQRemoveRequest(ARQRequest* request) {
    UNIMPLEMENTED();
}
void ARQRemoveOwnerRequest(u32 owner) {
    UNIMPLEMENTED();
}
void ARQFlushQueue(void) {
    UNIMPLEMENTED();
}
void ARQSetChunkSize(u32 size) {
    UNIMPLEMENTED();
}
u32 ARQGetChunkSize(void) {
    UNIMPLEMENTED();
}
BOOL ARQCheckInit(void) {
    UNIMPLEMENTED();
}