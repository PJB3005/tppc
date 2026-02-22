#include <dolphin/vi.h>

#include "os_impl.hpp"

static u32 RetraceCount;

VIRetraceCallback VISetPreRetraceCallback(VIRetraceCallback cb) {
    SOFT_UNIMPLEMENTED();
    return nullptr;
}
VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback cb) {
    SOFT_UNIMPLEMENTED();
    return nullptr;
}
void VIInit(void) {
    SOFT_UNIMPLEMENTED();
}
void VIWaitForRetrace(void) {
    SOFT_UNIMPLEMENTED();
}
void VIConfigure(const GXRenderModeObj* rm) {
    SOFT_UNIMPLEMENTED();
}
void VIConfigurePan(u16 xOrg, u16 yOrg, u16 width, u16 height) {
    SOFT_UNIMPLEMENTED();
}
void VIFlush(void) {
    SOFT_UNIMPLEMENTED();
}
void VISetNextFrameBuffer(void* fb) {
    SOFT_UNIMPLEMENTED();
}
void VISetNextRightFrameBuffer(void* fb) {
    SOFT_UNIMPLEMENTED();
}
void VISetBlack(BOOL black) {
    SOFT_UNIMPLEMENTED();
}
void VISet3D(BOOL threeD) {
    SOFT_UNIMPLEMENTED();
}
u32 VIGetRetraceCount(void) {
    return RetraceCount;
}
u32 VIGetNextField(void) {
    UNIMPLEMENTED();
}
u32 VIGetCurrentLine(void) {
    UNIMPLEMENTED();
}
u32 VIGetTvFormat(void) {
    UNIMPLEMENTED();
}
void* VIGetNextFrameBuffer(void) {
    UNIMPLEMENTED();
}
void* VIGetCurrentFrameBuffer(void) {
    UNIMPLEMENTED();
}
u32 VIGetScanMode(void) {
    UNIMPLEMENTED();
}
u32 VIGetDTVStatus(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
