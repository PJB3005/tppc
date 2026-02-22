#include <dolphin/gx.h>

#include "../os/os_impl.hpp"

void GXSetMisc(GXMiscToken token, u32 val) {
    UNIMPLEMENTED();
}
void GXFlush(void) {
    UNIMPLEMENTED();
}
void GXResetWriteGatherPipe(void) {
    UNIMPLEMENTED();
}
void GXAbortFrame(void) {
    UNIMPLEMENTED();
}
void GXSetDrawSync(u16 token) {
    UNIMPLEMENTED();
}
u16 GXReadDrawSync(void) {
    UNIMPLEMENTED();
    return 0;
}
void GXSetDrawDone(void) {
    UNIMPLEMENTED();
}
void GXWaitDrawDone(void) {
    UNIMPLEMENTED();
}
void GXDrawDone(void) {
    UNIMPLEMENTED();
}
void GXPixModeSync(void) {
    UNIMPLEMENTED();
}
void GXTexModeSync(void) {
    UNIMPLEMENTED();
}
GXDrawSyncCallback GXSetDrawSyncCallback(GXDrawSyncCallback cb) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
GXDrawDoneCallback GXSetDrawDoneCallback(GXDrawDoneCallback cb) {
    SOFT_UNIMPLEMENTED();
    return 0;
}

void GXSetFog(GXFogType type, f32 startz, f32 endz, f32 nearz, f32 farz, GXColor color) {
    UNIMPLEMENTED();
}
void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, const f32 projmtx[4][4]) {
    UNIMPLEMENTED();
}
void GXSetFogRangeAdj(GXBool enable, u16 center, const GXFogAdjTable* table) {
    UNIMPLEMENTED();
}
void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor, GXLogicOp op) {
    UNIMPLEMENTED();
}
void GXSetColorUpdate(GXBool update_enable) {
    UNIMPLEMENTED();
}
void GXSetAlphaUpdate(GXBool update_enable) {
    UNIMPLEMENTED();
}
void GXSetZMode(GXBool compare_enable, GXCompare func, GXBool update_enable) {
    UNIMPLEMENTED();
}
void GXSetZCompLoc(GXBool before_tex) {
    UNIMPLEMENTED();
}
void GXSetPixelFmt(GXPixelFmt pix_fmt, GXZFmt16 z_fmt) {
    UNIMPLEMENTED();
}
void GXSetDither(GXBool dither) {
    UNIMPLEMENTED();
}
void GXSetDstAlpha(GXBool enable, u8 alpha) {
    UNIMPLEMENTED();
}
void GXSetFieldMask(GXBool odd_mask, GXBool even_mask) {
    UNIMPLEMENTED();
}
void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio) {
    UNIMPLEMENTED();
}
void GXSetFogColor(GXColor color) {
    UNIMPLEMENTED();
}

void GXSetScissor(u32 left, u32 top, u32 wd, u32 ht) {
    UNIMPLEMENTED();
}
void GXSetCullMode(GXCullMode mode) {
    UNIMPLEMENTED();
}
void GXSetCoPlanar(GXBool enable) {
    UNIMPLEMENTED();
}

void GXProject(f32 x, f32 y, f32 z, const f32 mtx[3][4], const f32* pm, const f32* vp, f32* sx, f32* sy, f32* sz) {
    UNIMPLEMENTED();
}
void GXSetProjection(const f32 mtx[4][4], GXProjectionType type) {
    UNIMPLEMENTED();
}
void GXSetProjectionv(const f32* ptr) {
    UNIMPLEMENTED();
}
void GXLoadPosMtxImm(const f32 mtx[3][4], u32 id) {
    UNIMPLEMENTED();
}
void GXLoadPosMtxIndx(u16 mtx_indx, u32 id) {
    UNIMPLEMENTED();
}
void GXLoadNrmMtxImm(const f32 mtx[3][4], u32 id) {
    UNIMPLEMENTED();
}
void GXLoadNrmMtxImm3x3(const f32 mtx[3][3], u32 id) {
    UNIMPLEMENTED();
}
void GXLoadNrmMtxIndx3x3(u16 mtx_indx, u32 id) {
    UNIMPLEMENTED();
}
void GXSetCurrentMtx(u32 id) {
    UNIMPLEMENTED();
}
void GXLoadTexMtxImm(const f32 mtx[][4], u32 id, GXTexMtxType type) {
    UNIMPLEMENTED();
}
void GXLoadTexMtxIndx(u16 mtx_indx, u32 id, GXTexMtxType type) {
    UNIMPLEMENTED();
}
void GXSetViewportJitter(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz, u32 field) {
    UNIMPLEMENTED();
}
void GXSetViewport(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz) {
    UNIMPLEMENTED();
}
void GXSetScissorBoxOffset(s32 x_off, s32 y_off) {
    UNIMPLEMENTED();
}
void GXSetClipMode(GXClipMode mode) {
    UNIMPLEMENTED();
}
void GXSetZScaleOffset(f32 scale, f32 offset) {
    UNIMPLEMENTED();
}

void GXInitLightAttn(GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2) {
    UNIMPLEMENTED();
}
void GXInitLightAttnA(GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2) {
    UNIMPLEMENTED();
}
void GXInitLightAttnK(GXLightObj* lt_obj, f32 k0, f32 k1, f32 k2) {
    UNIMPLEMENTED();
}
void GXInitLightSpot(GXLightObj* lt_obj, f32 cutoff, GXSpotFn spot_func) {
    UNIMPLEMENTED();
}
void GXInitLightDistAttn(GXLightObj* lt_obj, f32 ref_dist, f32 ref_br, GXDistAttnFn dist_func) {
    UNIMPLEMENTED();
}
void GXInitLightPos(GXLightObj* lt_obj, f32 x, f32 y, f32 z) {
    UNIMPLEMENTED();
}
void GXInitLightDir(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz) {
    UNIMPLEMENTED();
}
void GXInitSpecularDir(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz) {
    UNIMPLEMENTED();
}
void GXInitSpecularDirHA(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz, f32 hx, f32 hy, f32 hz) {
    UNIMPLEMENTED();
}
void GXInitLightColor(GXLightObj* lt_obj, GXColor color) {
    UNIMPLEMENTED();
}
void GXLoadLightObjImm(const GXLightObj* lt_obj, GXLightID light) {
    UNIMPLEMENTED();
}
void GXLoadLightObjIndx(u32 lt_obj_indx, GXLightID light) {
    UNIMPLEMENTED();
}
void GXSetChanAmbColor(GXChannelID chan, GXColor amb_color) {
    UNIMPLEMENTED();
}
void GXSetChanMatColor(GXChannelID chan, GXColor mat_color) {
    UNIMPLEMENTED();
}
void GXSetNumChans(u8 nChans) {
    UNIMPLEMENTED();
}
void GXSetChanCtrl(GXChannelID chan, GXBool enable, GXColorSrc amb_src, GXColorSrc mat_src, u32 light_mask, GXDiffuseFn diff_fn, GXAttnFn attn_fn) {
    UNIMPLEMENTED();
}

void GXSetVtxDesc(GXAttr attr, GXAttrType type) {
    UNIMPLEMENTED();
}
void GXSetVtxDescv(const GXVtxDescList* attrPtr) {
    UNIMPLEMENTED();
}
void GXClearVtxDesc(void) {
    UNIMPLEMENTED();
}
void GXSetVtxAttrFmt(GXVtxFmt vtxfmt, GXAttr attr, GXCompCnt cnt, GXCompType type, u8 frac) {
    UNIMPLEMENTED();
}
void GXSetVtxAttrFmtv(GXVtxFmt vtxfmt, const GXVtxAttrFmtList* list) {
    UNIMPLEMENTED();
}
void GXSetArray(GXAttr attr, void* base_ptr, u8 stride) {
    UNIMPLEMENTED();
}
void GXInvalidateVtxCache(void) {
    UNIMPLEMENTED();
}
void GXSetTexCoordGen2(GXTexCoordID dst_coord, GXTexGenType func, GXTexGenSrc src_param, u32 mtx, GXBool normalize, u32 pt_texmtx) {
    UNIMPLEMENTED();
}
void GXSetNumTexGens(u8 nTexGens) {
    UNIMPLEMENTED();
}
void GXSetTevOp(GXTevStageID id, GXTevMode mode) {
    UNIMPLEMENTED();
}
void GXSetTevColorIn(GXTevStageID stage, GXTevColorArg a, GXTevColorArg b, GXTevColorArg c, GXTevColorArg d) {
    UNIMPLEMENTED();
}
void GXSetTevAlphaIn(GXTevStageID stage, GXTevAlphaArg a, GXTevAlphaArg b, GXTevAlphaArg c, GXTevAlphaArg d) {
    UNIMPLEMENTED();
}
void GXSetTevColorOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp, GXTevRegID out_reg) {
    UNIMPLEMENTED();
}
void GXSetTevAlphaOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp, GXTevRegID out_reg) {
    UNIMPLEMENTED();
}
void GXSetTevColor(GXTevRegID id, GXColor color) {
    UNIMPLEMENTED();
}
void GXSetTevColorS10(GXTevRegID id, GXColorS10 color) {
    UNIMPLEMENTED();
}
void GXSetTevKColor(GXTevKColorID id, GXColor color) {
    UNIMPLEMENTED();
}
void GXSetTevKColorSel(GXTevStageID stage, GXTevKColorSel sel) {
    UNIMPLEMENTED();
}
void GXSetTevKAlphaSel(GXTevStageID stage, GXTevKAlphaSel sel) {
    UNIMPLEMENTED();
}
void GXSetTevSwapMode(GXTevStageID stage, GXTevSwapSel ras_sel, GXTevSwapSel tex_sel) {
    UNIMPLEMENTED();
}
void GXSetTevSwapModeTable(GXTevSwapSel table, GXTevColorChan red, GXTevColorChan green, GXTevColorChan blue, GXTevColorChan alpha) {
    UNIMPLEMENTED();
}
void GXSetTevClampMode(void) {
    UNIMPLEMENTED();
}
void GXSetAlphaCompare(GXCompare comp0, u8 ref0, GXAlphaOp op, GXCompare comp1, u8 ref1) {
    UNIMPLEMENTED();
}
void GXSetZTexture(GXZTexOp op, GXTexFmt fmt, u32 bias) {
    UNIMPLEMENTED();
}
void GXSetTevOrder(GXTevStageID stage, GXTexCoordID coord, GXTexMapID map, GXChannelID color) {
    UNIMPLEMENTED();
}
void GXSetNumTevStages(u8 nStages) {
    UNIMPLEMENTED();
}

u32 GXGetTexBufferSize(u16 width, u16 height, u32 format, u8 mipmap, u8 max_lod) {
    UNIMPLEMENTED();
}
void GXInitTexObj(GXTexObj* obj, void* image_ptr, u16 width, u16 height, GXTexFmt format, GXTexWrapMode wrap_s, GXTexWrapMode wrap_t, u8 mipmap) {
    UNIMPLEMENTED();
}
void GXInitTexObjCI(GXTexObj* obj, void* image_ptr, u16 width, u16 height, GXCITexFmt format, GXTexWrapMode wrap_s, GXTexWrapMode wrap_t, u8 mipmap, u32 tlut_name) {
    UNIMPLEMENTED();
}
void GXInitTexObjLOD(GXTexObj* obj, GXTexFilter min_filt, GXTexFilter mag_filt,
    f32 min_lod, f32 max_lod, f32 lod_bias, GXBool bias_clamp,
    GXBool do_edge_lod, GXAnisotropy max_aniso) {
    UNIMPLEMENTED();
}
void GXInitTexObjData(GXTexObj* obj, void* image_ptr) {
    UNIMPLEMENTED();
}
void GXInitTexObjWrapMode(GXTexObj* obj, GXTexWrapMode s, GXTexWrapMode t) {
    UNIMPLEMENTED();
}
void GXInitTexObjTlut(GXTexObj* obj, u32 tlut_name) {
    UNIMPLEMENTED();
}
void GXInitTexObjUserData(GXTexObj* obj, void* user_data) {
    UNIMPLEMENTED();
}
void* GXGetTexObjUserData(const GXTexObj* obj) {
    UNIMPLEMENTED();
}
void GXLoadTexObjPreLoaded(GXTexObj* obj, GXTexRegion* region, GXTexMapID id) {
    UNIMPLEMENTED();
}
void GXLoadTexObj(GXTexObj* obj, GXTexMapID id) {
    UNIMPLEMENTED();
}
void GXInitTlutObj(GXTlutObj* tlut_obj, void* lut, GXTlutFmt fmt, u16 n_entries) {
    UNIMPLEMENTED();
}
void GXLoadTlut(GXTlutObj* tlut_obj, u32 tlut_name) {
    UNIMPLEMENTED();
}
void GXInitTexCacheRegion(GXTexRegion* region, u8 is_32b_mipmap, u32 tmem_even, GXTexCacheSize size_even, u32 tmem_odd, GXTexCacheSize size_odd) {
    UNIMPLEMENTED();
}
void GXInitTexPreLoadRegion(GXTexRegion* region, u32 tmem_even, u32 size_even, u32 tmem_odd, u32 size_odd) {
    UNIMPLEMENTED();
}
void GXInitTlutRegion(GXTlutRegion* region, u32 tmem_addr, GXTlutSize tlut_size) {
    UNIMPLEMENTED();
}
void GXInvalidateTexRegion(GXTexRegion* region) {
    UNIMPLEMENTED();
}
void GXInvalidateTexAll(void) {
    UNIMPLEMENTED();
}
GXTexRegionCallback GXSetTexRegionCallback(GXTexRegionCallback f) {
    UNIMPLEMENTED();
}
GXTlutRegionCallback GXSetTlutRegionCallback(GXTlutRegionCallback f) {
    UNIMPLEMENTED();
}
void GXPreLoadEntireTexture(GXTexObj* tex_obj, GXTexRegion* region) {
    UNIMPLEMENTED();
}
void GXSetTexCoordScaleManually(GXTexCoordID coord, u8 enable, u16 ss, u16 ts) {
    UNIMPLEMENTED();
}
void GXSetTexCoordCylWrap(GXTexCoordID coord, u8 s_enable, u8 t_enable) {
    UNIMPLEMENTED();
}
void GXSetTexCoordBias(GXTexCoordID coord, u8 s_enable, u8 t_enable) {
    UNIMPLEMENTED();
}
void GXInitTexObjFilter(GXTexObj* obj, GXTexFilter min_filt, GXTexFilter mag_filt) {
    UNIMPLEMENTED();
}
void GXInitTexObjMaxLOD(GXTexObj* obj, f32 max_lod) {
    UNIMPLEMENTED();
}
void GXInitTexObjMinLOD(GXTexObj* obj, f32 min_lod) {
    UNIMPLEMENTED();
}
void GXInitTexObjLODBias(GXTexObj* obj, f32 lod_bias) {
    UNIMPLEMENTED();
}
void GXInitTexObjBiasClamp(GXTexObj* obj, u8 bias_clamp) {
    UNIMPLEMENTED();
}
void GXInitTexObjEdgeLOD(GXTexObj* obj, u8 do_edge_lod) {
    UNIMPLEMENTED();
}
void GXInitTexObjMaxAniso(GXTexObj* obj, GXAnisotropy max_aniso) {
    UNIMPLEMENTED();
}

void GXBegin(GXPrimitive type, GXVtxFmt vtxfmt, u16 nverts) {
    UNIMPLEMENTED();
}

void GXSetTevIndirect(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexFormat format, GXIndTexBiasSel bias_sel, GXIndTexMtxID matrix_sel, GXIndTexWrap wrap_s, GXIndTexWrap wrap_t, GXBool add_prev, GXBool utc_lod, GXIndTexAlphaSel alpha_sel) {
    UNIMPLEMENTED();
}
void GXSetIndTexMtx(GXIndTexMtxID mtx_id, const f32 offset[2][3], s8 scale_exp) {
    UNIMPLEMENTED();
}
void GXSetIndTexCoordScale(GXIndTexStageID ind_state, GXIndTexScale scale_s, GXIndTexScale scale_t) {
    UNIMPLEMENTED();
}
void GXSetIndTexOrder(GXIndTexStageID ind_stage, GXTexCoordID tex_coord, GXTexMapID tex_map) {
    UNIMPLEMENTED();
}
void GXSetNumIndStages(u8 nIndStages) {
    UNIMPLEMENTED();
}
void GXSetTevDirect(GXTevStageID tev_stage) {
    UNIMPLEMENTED();
}
void GXSetTevIndWarp(GXTevStageID tev_stage, GXIndTexStageID ind_stage, u8 signed_offset, u8 replace_mode, GXIndTexMtxID matrix_sel) {
    UNIMPLEMENTED();
}
void GXSetTevIndTile(GXTevStageID tev_stage, GXIndTexStageID ind_stage, u16 tilesize_s,
    u16 tilesize_t, u16 tilespacing_s, u16 tilespacing_t, GXIndTexFormat format,
    GXIndTexMtxID matrix_sel, GXIndTexBiasSel bias_sel, GXIndTexAlphaSel alpha_sel) {
    UNIMPLEMENTED();
}
void GXSetTevIndBumpST(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexMtxID matrix_sel) {
    UNIMPLEMENTED();
}
void GXSetTevIndBumpXYZ(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexMtxID matrix_sel) {
    UNIMPLEMENTED();
}
void GXSetTevIndRepeat(GXTevStageID tev_stage) {
    UNIMPLEMENTED();
}
void __GXSetIndirectMask(u32 mask) {
    UNIMPLEMENTED();
}

// Attr
void GXGetVtxDesc(GXAttr attr, GXAttrType* type) {
    UNIMPLEMENTED();
}
void GXGetVtxDescv(GXVtxDescList* vcd) {
    UNIMPLEMENTED();
}
void GXGetVtxAttrFmt(GXVtxFmt fmt, GXAttr attr, GXCompCnt* cnt, GXCompType* type, u8* frac) {
    UNIMPLEMENTED();
}
void GXGetVtxAttrFmtv(GXVtxFmt fmt, GXVtxAttrFmtList* vat) {
    UNIMPLEMENTED();
}

// Geometry
void GXGetLineWidth(u8* width, GXTexOffset* texOffsets) {
    UNIMPLEMENTED();
}
void GXGetPointSize(u8* pointSize, GXTexOffset* texOffsets) {
    UNIMPLEMENTED();
}
void GXGetCullMode(GXCullMode* mode) {
    UNIMPLEMENTED();
}

// Light
void GXGetLightAttnA(const GXLightObj* lt_obj, f32* a0, f32* a1, f32* a2) {
    UNIMPLEMENTED();
}
void GXGetLightAttnK(const GXLightObj* lt_obj, f32* k0, f32* k1, f32* k2) {
    UNIMPLEMENTED();
}
void GXGetLightPos(const GXLightObj* lt_obj, f32* x, f32* y, f32* z) {
    UNIMPLEMENTED();
}
void GXGetLightDir(const GXLightObj* lt_obj, f32* nx, f32* ny, f32* nz) {
    UNIMPLEMENTED();
}
void GXGetLightColor(const GXLightObj* lt_obj, GXColor* color) {
    UNIMPLEMENTED();
}

// Texture
GXBool GXGetTexObjMipMap(const GXTexObj* to) {
    UNIMPLEMENTED();
}
GXTexFmt GXGetTexObjFmt(const GXTexObj* to) {
    UNIMPLEMENTED();
}
u16 GXGetTexObjWidth(const GXTexObj* to) {
    UNIMPLEMENTED();
}
u16 GXGetTexObjHeight(const GXTexObj* to) {
    UNIMPLEMENTED();
}
GXTexWrapMode GXGetTexObjWrapS(const GXTexObj* to) {
    UNIMPLEMENTED();
}
GXTexWrapMode GXGetTexObjWrapT(const GXTexObj* to) {
    UNIMPLEMENTED();
}
void* GXGetTexObjData(const GXTexObj* to)
{
    UNIMPLEMENTED();
}
void GXGetTexObjAll(const GXTexObj* obj, void** image_ptr, u16* width, u16* height, GXTexFmt* format, GXTexWrapMode* wrap_s, GXTexWrapMode* wrap_t, u8* mipmap) {
    UNIMPLEMENTED();
}
void GXGetTexObjLODAll(const GXTexObj* tex_obj, GXTexFilter* min_filt, GXTexFilter* mag_filt, f32* min_lod, f32* max_lod, f32* lod_bias, u8* bias_clamp, u8* do_edge_lod, GXAnisotropy* max_aniso) {
    UNIMPLEMENTED();
}
GXTexFilter GXGetTexObjMinFilt(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
GXTexFilter GXGetTexObjMagFilt(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
f32 GXGetTexObjMinLOD(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
f32 GXGetTexObjMaxLOD(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
f32 GXGetTexObjLODBias(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
GXBool GXGetTexObjBiasClamp(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
GXBool GXGetTexObjEdgeLOD(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
GXAnisotropy GXGetTexObjMaxAniso(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
u32 GXGetTexObjTlut(const GXTexObj* tex_obj) {
    UNIMPLEMENTED();
}
void GXGetTlutObjAll(const GXTlutObj* tlut_obj, void** data, GXTlutFmt* format, u16* numEntries) {
    UNIMPLEMENTED();
}
void* GXGetTlutObjData(const GXTlutObj* tlut_obj) {
    UNIMPLEMENTED();
}
GXTlutFmt GXGetTlutObjFmt(const GXTlutObj* tlut_obj) {
    UNIMPLEMENTED();
}
u16 GXGetTlutObjNumEntries(const GXTlutObj* tlut_obj) {
    UNIMPLEMENTED();
}
void GXGetTexRegionAll(const GXTexRegion* region, u8* is_cached, u8* is_32b_mipmap, u32* tmem_even, u32* size_even, u32* tmem_odd, u32* size_odd) {
    UNIMPLEMENTED();
}
void GXGetTlutRegionAll(const GXTlutRegion* region, u32* tmem_addr, GXTlutSize* tlut_size) {
    UNIMPLEMENTED();
}

// Transform
void GXGetProjectionv(f32* ptr) {
    UNIMPLEMENTED();
}
void GXGetViewportv(f32* vp) {
    UNIMPLEMENTED();
}
void GXGetScissor(u32* left, u32* top, u32* wd, u32* ht) {
    UNIMPLEMENTED();
}

void GXAdjustForOverscan(const GXRenderModeObj* rmin, GXRenderModeObj* rmout, u16 hor, u16 ver) {
    UNIMPLEMENTED();
}
void GXSetDispCopySrc(u16 left, u16 top, u16 wd, u16 ht) {
    UNIMPLEMENTED();
}
void GXSetTexCopySrc(u16 left, u16 top, u16 wd, u16 ht) {
    UNIMPLEMENTED();
}
void GXSetDispCopyDst(u16 wd, u16 ht) {
    UNIMPLEMENTED();
}
void GXSetTexCopyDst(u16 wd, u16 ht, GXTexFmt fmt, GXBool mipmap) {
    UNIMPLEMENTED();
}
void GXSetDispCopyFrame2Field(GXCopyMode mode) {
    UNIMPLEMENTED();
}
void GXSetCopyClamp(GXFBClamp clamp) {
    UNIMPLEMENTED();
}
u32 GXSetDispCopyYScale(f32 vscale) {
    UNIMPLEMENTED();
}
void GXSetCopyClear(GXColor clear_clr, u32 clear_z) {
    UNIMPLEMENTED();
}
void GXSetCopyFilter(GXBool aa, const u8 sample_pattern[12][2], GXBool vf, const u8 vfilter[7]) {
    UNIMPLEMENTED();
}
void GXSetDispCopyGamma(GXGamma gamma) {
    UNIMPLEMENTED();
}
void GXCopyDisp(void* dest, GXBool clear) {
    UNIMPLEMENTED();
}
void GXCopyTex(void* dest, GXBool clear) {
    UNIMPLEMENTED();
}
void GXClearBoundingBox(void) {
    UNIMPLEMENTED();
}
void GXReadBoundingBox(u16* left, u16* top, u16* right, u16* bottom) {
    UNIMPLEMENTED();
}
u16 GXGetNumXfbLines(u16 efbHeight, f32 yScale) {
    UNIMPLEMENTED();
}
f32 GXGetYScaleFactor(u16 efbHeight, u16 xfbHeight) {
    UNIMPLEMENTED();
}

void GXBeginDisplayList(void* list, u32 size) {
    UNIMPLEMENTED();
}
u32 GXEndDisplayList(void) {
    UNIMPLEMENTED();
}
void GXCallDisplayList(void* list, u32 nbytes) {
    UNIMPLEMENTED();
}

void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size) {
    UNIMPLEMENTED();
}
void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr) {
    UNIMPLEMENTED();
}
void GXInitFifoLimits(GXFifoObj* fifo, u32 hiWatermark, u32 loWatermark) {
    UNIMPLEMENTED();
}
void GXSetCPUFifo(GXFifoObj* fifo) {
    UNIMPLEMENTED();
}
void GXSetGPFifo(GXFifoObj* fifo) {
    UNIMPLEMENTED();
}
void GXSaveCPUFifo(GXFifoObj* fifo) {
    UNIMPLEMENTED();
}
void GXSaveGPFifo(GXFifoObj* fifo) {
    UNIMPLEMENTED();
}
void GXGetGPStatus(GXBool* overhi, GXBool* underlow, GXBool* readIdle, GXBool* cmdIdle, GXBool* brkpt) {
    UNIMPLEMENTED();
}
void GXGetFifoStatus(GXFifoObj* fifo, GXBool* overhi, GXBool* underflow, u32* fifoCount, GXBool* cpuWrite, GXBool* gpRead, GXBool* fifowrap) {
    UNIMPLEMENTED();
}
void GXGetFifoPtrs(GXFifoObj* fifo, void** readPtr, void** writePtr) {
    UNIMPLEMENTED();
}
void* GXGetFifoBase(const GXFifoObj* fifo) {
    UNIMPLEMENTED();
}
u32 GXGetFifoSize(const GXFifoObj* fifo) {
    UNIMPLEMENTED();
}
void GXGetFifoLimits(const GXFifoObj* fifo, u32* hi, u32* lo) {
    UNIMPLEMENTED();
}
GXBreakPtCallback GXSetBreakPtCallback(GXBreakPtCallback cb) {
    UNIMPLEMENTED();
}
void GXEnableBreakPt(void* break_pt) {
    UNIMPLEMENTED();
}
void GXDisableBreakPt(void) {
    UNIMPLEMENTED();
}
OSThread* GXSetCurrentGXThread(void) {
    UNIMPLEMENTED();
}
OSThread* GXGetCurrentGXThread(void) {
    UNIMPLEMENTED();
}
GXFifoObj* GXGetCPUFifo(void) {
    UNIMPLEMENTED();
}
GXFifoObj* GXGetGPFifo(void) {
    UNIMPLEMENTED();
}
u32 GXGetOverflowCount(void) {
    UNIMPLEMENTED();
}
u32 GXResetOverflowCount(void) {
    UNIMPLEMENTED();
}
volatile void* GXRedirectWriteGatherPipe(void* ptr) {
    UNIMPLEMENTED();
}
void GXRestoreWriteGatherPipe(void) {
    UNIMPLEMENTED();
}

void GXSetGPMetric(GXPerf0 perf0, GXPerf1 perf1) {
    UNIMPLEMENTED();
}
void GXReadGPMetric(u32* cnt0, u32* cnt1) {
    UNIMPLEMENTED();
}
void GXClearGPMetric(void) {
    UNIMPLEMENTED();
}
u32 GXReadGP0Metric(void) {
    UNIMPLEMENTED();
}
u32 GXReadGP1Metric(void) {
    UNIMPLEMENTED();
}
void GXReadMemMetric(u32* cp_req, u32* tc_req, u32* cpu_rd_req, u32* cpu_wr_req, u32* dsp_req, u32* io_req, u32* vi_req, u32* pe_req, u32* rf_req, u32* fi_req) {
    UNIMPLEMENTED();
}
void GXClearMemMetric(void) {
    UNIMPLEMENTED();
}
void GXReadPixMetric(u32* top_pixels_in, u32* top_pixels_out, u32* bot_pixels_in, u32* bot_pixels_out, u32* clr_pixels_in, u32* copy_clks) {
    UNIMPLEMENTED();
}
void GXClearPixMetric(void) {
    UNIMPLEMENTED();
}
void GXSetVCacheMetric(GXVCachePerf attr) {
    UNIMPLEMENTED();
}
void GXReadVCacheMetric(u32* check, u32* miss, u32* stall) {
    UNIMPLEMENTED();
}
void GXClearVCacheMetric(void) {
    UNIMPLEMENTED();
}
void GXInitXfRasMetric(void) {
    UNIMPLEMENTED();
}
void GXReadXfRasMetric(u32* xf_wait_in, u32* xf_wait_out, u32* ras_busy, u32* clocks) {
    UNIMPLEMENTED();
}
u32 GXReadClksPerVtx(void) {
    UNIMPLEMENTED();
}
void GXSetLineWidth(u8 width, GXTexOffset texOffsets) {
    UNIMPLEMENTED();
}
void GXSetPointSize(u8 pointSize, GXTexOffset texOffsets) {
    UNIMPLEMENTED();
}
void GXEnableTexOffsets(GXTexCoordID coord, u8 line_enable, u8 point_enable) {
    UNIMPLEMENTED();
}

BOOL IsWriteGatherBufferEmpty(void) {
    UNIMPLEMENTED();
}
GXFifoObj* GXInit(void* base, u32 size) {
    SOFT_UNIMPLEMENTED();
    return nullptr;
}

void GXPokeAlphaMode(GXCompare func, u8 threshold) {
    UNIMPLEMENTED();
}
void GXPokeAlphaRead(GXAlphaReadMode mode) {
    UNIMPLEMENTED();
}
void GXPokeAlphaUpdate(GXBool update_enable) {
    UNIMPLEMENTED();
}
void GXPokeBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor, GXLogicOp op) {
    UNIMPLEMENTED();
}
void GXPokeColorUpdate(GXBool update_enable) {
    UNIMPLEMENTED();
}
void GXPokeDstAlpha(GXBool enable, u8 alpha) {
    UNIMPLEMENTED();
}
void GXPokeDither(GXBool dither) {
    UNIMPLEMENTED();
}
void GXPokeZMode(GXBool compare_enable, GXCompare func, GXBool update_enable) {
    UNIMPLEMENTED();
}
void GXPeekARGB(u16 x, u16 y, u32* color) {
    UNIMPLEMENTED();
}
void GXPokeARGB(u16 x, u16 y, u32 color) {
    UNIMPLEMENTED();
}
void GXPeekZ(u16 x, u16 y, u32* z) {
    UNIMPLEMENTED();
}
void GXPokeZ(u16 x, u16 y, u32 z) {
    UNIMPLEMENTED();
}
u32 GXCompressZ16(u32 z24, GXZFmt16 zfmt) {
    UNIMPLEMENTED();
}
u32 GXDecompressZ16(u32 z16, GXZFmt16 zfmt) {
    UNIMPLEMENTED();
}

GXRenderModeObj GXNtsc240Ds;
GXRenderModeObj GXNtsc240DsAa;
GXRenderModeObj GXNtsc240Int;
GXRenderModeObj GXNtsc240IntAa;
GXRenderModeObj GXNtsc480IntDf;
GXRenderModeObj GXNtsc480Int;
GXRenderModeObj GXNtsc480IntAa;
GXRenderModeObj GXNtsc480Prog;
GXRenderModeObj GXNtsc480ProgAa;
GXRenderModeObj GXMpal240Ds;
GXRenderModeObj GXMpal240DsAa;
GXRenderModeObj GXMpal240Int;
GXRenderModeObj GXMpal240IntAa;
GXRenderModeObj GXMpal480IntDf;
GXRenderModeObj GXMpal480Int;
GXRenderModeObj GXMpal480IntAa;
GXRenderModeObj GXPal264Ds;
GXRenderModeObj GXPal264DsAa;
GXRenderModeObj GXPal264Int;
GXRenderModeObj GXPal264IntAa;
GXRenderModeObj GXPal528IntDf;
GXRenderModeObj GXPal528Int;
GXRenderModeObj GXPal528IntAa;
GXRenderModeObj GXEurgb60Hz240Ds;
GXRenderModeObj GXEurgb60Hz240DsAa;
GXRenderModeObj GXEurgb60Hz240Int;
GXRenderModeObj GXEurgb60Hz240IntAa;
GXRenderModeObj GXEurgb60Hz480IntDf;
GXRenderModeObj GXEurgb60Hz480Int;
GXRenderModeObj GXEurgb60Hz480IntAa;
