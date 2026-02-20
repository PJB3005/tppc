#include <dolphin/ar.h>

#include "../os/os_impl.hpp"

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
    UNIMPLEMENTED();
}
u32 ARFree(u32* length) {
    UNIMPLEMENTED();
}
BOOL ARCheckInit(void) {
    UNIMPLEMENTED();
}
u32 ARInit(u32* stack_index_addr, u32 num_entries) {
    UNIMPLEMENTED();
}
void ARReset(void) {
    UNIMPLEMENTED();
}
void ARSetSize(void) {
    UNIMPLEMENTED();
}
u32 ARGetBaseAddress(void) {
    UNIMPLEMENTED();
}
u32 ARGetSize(void) {
    UNIMPLEMENTED();
}
u32 ARGetInternalSize(void) {
    UNIMPLEMENTED();
}
void ARClear(u32 flag) {
    UNIMPLEMENTED();
}

void ARQInit(void) {
    UNIMPLEMENTED();
}
void ARQReset(void) {
    UNIMPLEMENTED();
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