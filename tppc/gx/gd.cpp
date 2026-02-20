#include <dolphin/gd.h>

#include "../os/os_impl.hpp"

GDLObj* __GDCurrentDL;

void GDInitGDLObj(GDLObj* dl, void* start, u32 length) {
    UNIMPLEMENTED();
}
void GDFlushCurrToMem(void) {
    UNIMPLEMENTED();
}
void GDPadCurr32(void) {
    UNIMPLEMENTED();
}
void GDOverflowed(void) {
    UNIMPLEMENTED();
}
void GDSetOverflowCallback(GDOverflowCb callback) {
    UNIMPLEMENTED();
}
GDOverflowCb GDGetOverflowCallback(void) {
    UNIMPLEMENTED();
}

void GDSetVtxDescv(const GXVtxDescList* attrPtr) {
    UNIMPLEMENTED();
}
void GDSetVtxAttrFmtv(GXVtxFmt vtxfmt, const GXVtxAttrFmtList* list) {
    UNIMPLEMENTED();
}
void GDSetArray(GXAttr attr, void* base_ptr, u8 stride) {
    UNIMPLEMENTED();
}
void GDSetArrayRaw(GXAttr attr, u32 base_ptr_raw, u8 stride) {
    UNIMPLEMENTED();
}
void GDPatchArrayPtr(void* base_ptr) {
    UNIMPLEMENTED();
}
void GDSetTexCoordGen(GXTexCoordID dst_coord, GXTexGenType func, GXTexGenSrc src_param, u8 normalize, u32 postmtx) {
    UNIMPLEMENTED();
}
void GDSetCullMode(GXCullMode mode) {
    UNIMPLEMENTED();
}
void GDSetGenMode(u8 nTexGens, u8 nChans, u8 nTevs) {
    UNIMPLEMENTED();
}
void GDSetGenMode2(u8 nTexGens, u8 nChans, u8 nTevs, u8 nInds, GXCullMode cm) {
    UNIMPLEMENTED();
}
void GDSetLPSize(u8 lineWidth, u8 pointSize, GXTexOffset lineOffset, GXTexOffset pointOffset, u8 lineHalfAspect) {
    UNIMPLEMENTED();
}
void GDSetCoPlanar(u8 enable) {
    UNIMPLEMENTED();
}
