#include <dolphin/gx.h>

#include "../os/os_impl.hpp"
#include "global.h"

void GXSetMisc(GXMiscToken token, u32 val) {
    UNIMPLEMENTED();
}
void GXFlush(void) {
    SOFT_UNIMPLEMENTED();
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
    SOFT_UNIMPLEMENTED();
}
void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, const f32 projmtx[4][4]) {
    SOFT_UNIMPLEMENTED();
}
void GXSetFogRangeAdj(GXBool enable, u16 center, const GXFogAdjTable* table) {
    SOFT_UNIMPLEMENTED();
}
void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor, GXLogicOp op) {
    SOFT_UNIMPLEMENTED();
}
void GXSetColorUpdate(GXBool update_enable) {
    SOFT_UNIMPLEMENTED();
}
void GXSetAlphaUpdate(GXBool update_enable) {
    SOFT_UNIMPLEMENTED();
}
void GXSetZMode(GXBool compare_enable, GXCompare func, GXBool update_enable) {
    SOFT_UNIMPLEMENTED();
}
void GXSetZCompLoc(GXBool before_tex) {
    SOFT_UNIMPLEMENTED();
}
void GXSetPixelFmt(GXPixelFmt pix_fmt, GXZFmt16 z_fmt) {
    SOFT_UNIMPLEMENTED();
}
void GXSetDither(GXBool dither) {
    SOFT_UNIMPLEMENTED();
}
void GXSetDstAlpha(GXBool enable, u8 alpha) {
    SOFT_UNIMPLEMENTED();
}
void GXSetFieldMask(GXBool odd_mask, GXBool even_mask) {
    SOFT_UNIMPLEMENTED();
}
void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio) {
    SOFT_UNIMPLEMENTED();
}
void GXSetFogColor(GXColor color) {
    SOFT_UNIMPLEMENTED();
}

void GXSetScissor(u32 left, u32 top, u32 wd, u32 ht) {
    SOFT_UNIMPLEMENTED();
}
void GXSetCullMode(GXCullMode mode) {
    SOFT_UNIMPLEMENTED();
}
void GXSetCoPlanar(GXBool enable) {
    SOFT_UNIMPLEMENTED();
}

void GXProject(f32 x, f32 y, f32 z, const f32 mtx[3][4], const f32* pm, const f32* vp, f32* sx, f32* sy, f32* sz) {
    SOFT_UNIMPLEMENTED();
}
void GXSetProjection(const f32 mtx[4][4], GXProjectionType type) {
    SOFT_UNIMPLEMENTED();
}
void GXSetProjectionv(const f32* ptr) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadPosMtxImm(const f32 mtx[3][4], u32 id) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadPosMtxIndx(u16 mtx_indx, u32 id) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadNrmMtxImm(const f32 mtx[3][4], u32 id) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadNrmMtxImm3x3(const f32 mtx[3][3], u32 id) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadNrmMtxIndx3x3(u16 mtx_indx, u32 id) {
    SOFT_UNIMPLEMENTED();
}
void GXSetCurrentMtx(u32 id) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadTexMtxImm(const f32 mtx[][4], u32 id, GXTexMtxType type) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadTexMtxIndx(u16 mtx_indx, u32 id, GXTexMtxType type) {
    SOFT_UNIMPLEMENTED();
}
void GXSetViewportJitter(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz, u32 field) {
    SOFT_UNIMPLEMENTED();
}
void GXSetViewport(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz) {
    SOFT_UNIMPLEMENTED();
}
void GXSetScissorBoxOffset(s32 x_off, s32 y_off) {
    SOFT_UNIMPLEMENTED();
}
void GXSetClipMode(GXClipMode mode) {
    SOFT_UNIMPLEMENTED();
}
void GXSetZScaleOffset(f32 scale, f32 offset) {
    SOFT_UNIMPLEMENTED();
}

void GXInitLightAttn(GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2) {
    SOFT_UNIMPLEMENTED();
}
void GXInitLightAttnA(GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2) {
    SOFT_UNIMPLEMENTED();
}
void GXInitLightAttnK(GXLightObj* lt_obj, f32 k0, f32 k1, f32 k2) {
    SOFT_UNIMPLEMENTED();
}
void GXInitLightSpot(GXLightObj* lt_obj, f32 cutoff, GXSpotFn spot_func) {
    SOFT_UNIMPLEMENTED();
}
void GXInitLightDistAttn(GXLightObj* lt_obj, f32 ref_dist, f32 ref_br, GXDistAttnFn dist_func) {
    SOFT_UNIMPLEMENTED();
}
void GXInitLightPos(GXLightObj* lt_obj, f32 x, f32 y, f32 z) {
    SOFT_UNIMPLEMENTED();
}
void GXInitLightDir(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz) {
    SOFT_UNIMPLEMENTED();
}
void GXInitSpecularDir(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz) {
    SOFT_UNIMPLEMENTED();
}
void GXInitSpecularDirHA(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz, f32 hx, f32 hy, f32 hz) {
    SOFT_UNIMPLEMENTED();
}
void GXInitLightColor(GXLightObj* lt_obj, GXColor color) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadLightObjImm(const GXLightObj* lt_obj, GXLightID light) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadLightObjIndx(u32 lt_obj_indx, GXLightID light) {
    SOFT_UNIMPLEMENTED();
}
void GXSetChanAmbColor(GXChannelID chan, GXColor amb_color) {
    SOFT_UNIMPLEMENTED();
}
void GXSetChanMatColor(GXChannelID chan, GXColor mat_color) {
    SOFT_UNIMPLEMENTED();
}
void GXSetNumChans(u8 nChans) {
    SOFT_UNIMPLEMENTED();
}
void GXSetChanCtrl(GXChannelID chan, GXBool enable, GXColorSrc amb_src, GXColorSrc mat_src, u32 light_mask, GXDiffuseFn diff_fn, GXAttnFn attn_fn) {
    SOFT_UNIMPLEMENTED();
}

void GXSetVtxDesc(GXAttr attr, GXAttrType type) {
    SOFT_UNIMPLEMENTED();
}
void GXSetVtxDescv(const GXVtxDescList* attrPtr) {
    SOFT_UNIMPLEMENTED();
}
void GXClearVtxDesc(void) {
    SOFT_UNIMPLEMENTED();
}
void GXSetVtxAttrFmt(GXVtxFmt vtxfmt, GXAttr attr, GXCompCnt cnt, GXCompType type, u8 frac) {
    SOFT_UNIMPLEMENTED();
}
void GXSetVtxAttrFmtv(GXVtxFmt vtxfmt, const GXVtxAttrFmtList* list) {
    SOFT_UNIMPLEMENTED();
}
void GXSetArray(GXAttr attr, void* base_ptr, u8 stride) {
    SOFT_UNIMPLEMENTED();
}
void GXInvalidateVtxCache(void) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTexCoordGen2(GXTexCoordID dst_coord, GXTexGenType func, GXTexGenSrc src_param, u32 mtx, GXBool normalize, u32 pt_texmtx) {
    SOFT_UNIMPLEMENTED();
}
void GXSetNumTexGens(u8 nTexGens) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevOp(GXTevStageID id, GXTevMode mode) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevColorIn(GXTevStageID stage, GXTevColorArg a, GXTevColorArg b, GXTevColorArg c, GXTevColorArg d) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevAlphaIn(GXTevStageID stage, GXTevAlphaArg a, GXTevAlphaArg b, GXTevAlphaArg c, GXTevAlphaArg d) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevColorOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp, GXTevRegID out_reg) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevAlphaOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp, GXTevRegID out_reg) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevColor(GXTevRegID id, GXColor color) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevColorS10(GXTevRegID id, GXColorS10 color) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevKColor(GXTevKColorID id, GXColor color) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevKColorSel(GXTevStageID stage, GXTevKColorSel sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevKAlphaSel(GXTevStageID stage, GXTevKAlphaSel sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevSwapMode(GXTevStageID stage, GXTevSwapSel ras_sel, GXTevSwapSel tex_sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevSwapModeTable(GXTevSwapSel table, GXTevColorChan red, GXTevColorChan green, GXTevColorChan blue, GXTevColorChan alpha) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevClampMode(void) {
    SOFT_UNIMPLEMENTED();
}
void GXSetAlphaCompare(GXCompare comp0, u8 ref0, GXAlphaOp op, GXCompare comp1, u8 ref1) {
    SOFT_UNIMPLEMENTED();
}
void GXSetZTexture(GXZTexOp op, GXTexFmt fmt, u32 bias) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevOrder(GXTevStageID stage, GXTexCoordID coord, GXTexMapID map, GXChannelID color) {
    SOFT_UNIMPLEMENTED();
}
void GXSetNumTevStages(u8 nStages) {
    SOFT_UNIMPLEMENTED();
}

static void __GXGetTexTileShift(GXTexFmt fmt, u32* rowTileS, u32* colTileS) {
    switch (fmt) {
    case GX_TF_I4:
    case 0x8:
    case GX_TF_CMPR:
    case GX_CTF_R4:
    case GX_CTF_Z4:
        *rowTileS = 3;
        *colTileS = 3;
        break;
    case GX_TF_I8:
    case GX_TF_IA4:
    case 0x9:
    case GX_TF_Z8:
    case GX_CTF_RA4:
    case GX_TF_A8:
    case GX_CTF_R8:
    case GX_CTF_G8:
    case GX_CTF_B8:
    case GX_CTF_Z8M:
    case GX_CTF_Z8L:
        *rowTileS = 3;
        *colTileS = 2;
        break;
    case GX_TF_IA8:
    case GX_TF_RGB565:
    case GX_TF_RGB5A3:
    case GX_TF_RGBA8:
    case 0xA:
    case GX_TF_Z16:
    case GX_TF_Z24X8:
    case GX_CTF_RA8:
    case GX_CTF_RG8:
    case GX_CTF_GB8:
    case GX_CTF_Z16L:
        *rowTileS = 2;
        *colTileS = 2;
        break;
    default:
        *rowTileS = *colTileS = 0;
        ASSERTMSGLINEV(444, 0, "%s: invalid texture format", "GX");
        break;
    }
}

u32 GXGetTexBufferSize(u16 width, u16 height, u32 format, GXBool mipmap, u8 max_lod) {
    u32 tileShiftX;
    u32 tileShiftY;
    u32 tileBytes;
    u32 bufferSize;
    u32 nx;
    u32 ny;
    u32 level;

    ASSERTMSGLINEV(460, width <= 1024, "%s: width too large", "GXGetTexBufferSize");
    ASSERTMSGLINEV(461, height <= 1024, "%s: height too large", "GXGetTexBufferSize");

    __GXGetTexTileShift(static_cast<GXTexFmt>(format), &tileShiftX, &tileShiftY);
    if (format == GX_TF_RGBA8 || format == GX_TF_Z24X8) {
        tileBytes = 64;
    } else {
        tileBytes = 32;
    }

    if (mipmap == GX_TRUE) {
        nx = 1 << (31 - __cntlzw(width));
        ASSERTMSGLINEV(479, width == nx, "%s: width must be a power of 2", "GXGetTexBufferSize");
        ny = 1 << (31 - __cntlzw(height));
        ASSERTMSGLINEV(482, height == ny, "%s: height must be a power of 2", "GXGetTexBufferSize");

        bufferSize = 0;
        for (level = 0; level < max_lod; level++) {
            nx = (width + (1 << tileShiftX) - 1) >> tileShiftX;
            ny = (height + (1 << tileShiftY) - 1) >> tileShiftY;
            bufferSize += tileBytes * (nx * ny);
            if (width == 1 && height == 1) {
                break;
            }
            width = (width > 1) ? width >> 1 : 1;
            height = (height > 1) ? height >> 1 : 1;
        }
    } else {
        nx = (width + (1 << tileShiftX) - 1) >> tileShiftX;
        ny = (height + (1 << tileShiftY) - 1) >> tileShiftY;
        bufferSize = nx * ny * tileBytes;
    }

    return bufferSize;
}

void GXInitTexObj(GXTexObj* obj, void* image_ptr, u16 width, u16 height, GXTexFmt format, GXTexWrapMode wrap_s, GXTexWrapMode wrap_t, u8 mipmap) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjCI(GXTexObj* obj, void* image_ptr, u16 width, u16 height, GXCITexFmt format, GXTexWrapMode wrap_s, GXTexWrapMode wrap_t, u8 mipmap, u32 tlut_name) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjLOD(GXTexObj* obj, GXTexFilter min_filt, GXTexFilter mag_filt,
    f32 min_lod, f32 max_lod, f32 lod_bias, GXBool bias_clamp,
    GXBool do_edge_lod, GXAnisotropy max_aniso) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjData(GXTexObj* obj, void* image_ptr) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjWrapMode(GXTexObj* obj, GXTexWrapMode s, GXTexWrapMode t) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjTlut(GXTexObj* obj, u32 tlut_name) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjUserData(GXTexObj* obj, void* user_data) {
    SOFT_UNIMPLEMENTED();
}
void* GXGetTexObjUserData(const GXTexObj* obj) {
    SOFT_UNIMPLEMENTED();
    return nullptr;
}
void GXLoadTexObjPreLoaded(GXTexObj* obj, GXTexRegion* region, GXTexMapID id) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadTexObj(GXTexObj* obj, GXTexMapID id) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTlutObj(GXTlutObj* tlut_obj, void* lut, GXTlutFmt fmt, u16 n_entries) {
    SOFT_UNIMPLEMENTED();
}
void GXLoadTlut(GXTlutObj* tlut_obj, u32 tlut_name) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexCacheRegion(GXTexRegion* region, u8 is_32b_mipmap, u32 tmem_even, GXTexCacheSize size_even, u32 tmem_odd, GXTexCacheSize size_odd) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexPreLoadRegion(GXTexRegion* region, u32 tmem_even, u32 size_even, u32 tmem_odd, u32 size_odd) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTlutRegion(GXTlutRegion* region, u32 tmem_addr, GXTlutSize tlut_size) {
    SOFT_UNIMPLEMENTED();
}
void GXInvalidateTexRegion(GXTexRegion* region) {
    SOFT_UNIMPLEMENTED();
}
void GXInvalidateTexAll(void) {
    SOFT_UNIMPLEMENTED();
}
GXTexRegionCallback GXSetTexRegionCallback(GXTexRegionCallback f) {
    SOFT_UNIMPLEMENTED();
    return {};
}
GXTlutRegionCallback GXSetTlutRegionCallback(GXTlutRegionCallback f) {
    SOFT_UNIMPLEMENTED();
    return {};
}
void GXPreLoadEntireTexture(GXTexObj* tex_obj, GXTexRegion* region) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTexCoordScaleManually(GXTexCoordID coord, u8 enable, u16 ss, u16 ts) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTexCoordCylWrap(GXTexCoordID coord, u8 s_enable, u8 t_enable) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTexCoordBias(GXTexCoordID coord, u8 s_enable, u8 t_enable) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjFilter(GXTexObj* obj, GXTexFilter min_filt, GXTexFilter mag_filt) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjMaxLOD(GXTexObj* obj, f32 max_lod) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjMinLOD(GXTexObj* obj, f32 min_lod) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjLODBias(GXTexObj* obj, f32 lod_bias) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjBiasClamp(GXTexObj* obj, u8 bias_clamp) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjEdgeLOD(GXTexObj* obj, u8 do_edge_lod) {
    SOFT_UNIMPLEMENTED();
}
void GXInitTexObjMaxAniso(GXTexObj* obj, GXAnisotropy max_aniso) {
    SOFT_UNIMPLEMENTED();
}

void GXBegin(GXPrimitive type, GXVtxFmt vtxfmt, u16 nverts) {
    SOFT_UNIMPLEMENTED();
}

void GXSetTevIndirect(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexFormat format, GXIndTexBiasSel bias_sel, GXIndTexMtxID matrix_sel, GXIndTexWrap wrap_s, GXIndTexWrap wrap_t, GXBool add_prev, GXBool utc_lod, GXIndTexAlphaSel alpha_sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetIndTexMtx(GXIndTexMtxID mtx_id, const f32 offset[2][3], s8 scale_exp) {
    SOFT_UNIMPLEMENTED();
}
void GXSetIndTexCoordScale(GXIndTexStageID ind_state, GXIndTexScale scale_s, GXIndTexScale scale_t) {
    SOFT_UNIMPLEMENTED();
}
void GXSetIndTexOrder(GXIndTexStageID ind_stage, GXTexCoordID tex_coord, GXTexMapID tex_map) {
    SOFT_UNIMPLEMENTED();
}
void GXSetNumIndStages(u8 nIndStages) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevDirect(GXTevStageID tev_stage) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevIndWarp(GXTevStageID tev_stage, GXIndTexStageID ind_stage, u8 signed_offset, u8 replace_mode, GXIndTexMtxID matrix_sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevIndTile(GXTevStageID tev_stage, GXIndTexStageID ind_stage, u16 tilesize_s,
    u16 tilesize_t, u16 tilespacing_s, u16 tilespacing_t, GXIndTexFormat format,
    GXIndTexMtxID matrix_sel, GXIndTexBiasSel bias_sel, GXIndTexAlphaSel alpha_sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevIndBumpST(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexMtxID matrix_sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevIndBumpXYZ(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexMtxID matrix_sel) {
    SOFT_UNIMPLEMENTED();
}
void GXSetTevIndRepeat(GXTevStageID tev_stage) {
    SOFT_UNIMPLEMENTED();
}
void __GXSetIndirectMask(u32 mask) {
    SOFT_UNIMPLEMENTED();
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

static u32 __GXGetNumXfbLines(u32 efbHt, u32 iScale) {
    u32 count;
    u32 realHt;
    u32 iScaleD;

    count = (efbHt - 1) * 0x100;
    realHt = (count / iScale) + 1;

    iScaleD = iScale;

    if (iScaleD > 0x80 && iScaleD < 0x100) {
        while (iScaleD % 2 == 0) {
            iScaleD /= 2;
        }

        if (efbHt % iScaleD == 0) {
            realHt++;
        }
    }

    if (realHt > 0x400) {
        realHt = 0x400;
    }

    return realHt;
}

u16 GXGetNumXfbLines(u16 efbHeight, f32 yScale) {
    u32 iScale;
    ASSERTMSGLINE(1486, yScale >= 1.0f, "GXGetNumXfbLines: Vertical scale must be >= 1.0");

    iScale = (u32)(256.0f / yScale) & 0x1FF;
    return __GXGetNumXfbLines(efbHeight, iScale);
}

f32 GXGetYScaleFactor(u16 efbHeight, u16 xfbHeight) {
    f32 fScale;
    f32 yScale;
    u32 iScale;
    u32 tgtHt;
    u32 realHt;

    ASSERTMSGLINE(1510, xfbHeight <= 1024, "GXGetYScaleFactor: Display copy only supports up to 1024 lines.\n");
    ASSERTMSGLINE(1512, efbHeight <= xfbHeight, "GXGetYScaleFactor: EFB height should not be greater than XFB height.\n");

    tgtHt = xfbHeight;
    yScale = (f32)xfbHeight / (f32)efbHeight;
    iScale = (u32)(256.0f / yScale) & 0x1FF;
    realHt = __GXGetNumXfbLines(efbHeight, iScale);

    while (realHt > xfbHeight) {
        tgtHt--;
        yScale = (f32)tgtHt / (f32)efbHeight;
        iScale = (u32)(256.0f / yScale) & 0x1FF;
        realHt = __GXGetNumXfbLines(efbHeight, iScale);
    }

    fScale = yScale;
    while (realHt < xfbHeight) {
        fScale = yScale;
        tgtHt++;
        yScale = (f32)tgtHt / (f32)efbHeight;
        iScale = (u32)(256.0f / yScale) & 0x1FF;
        realHt = __GXGetNumXfbLines(efbHeight, iScale);
    }

    return fScale;
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
    SOFT_UNIMPLEMENTED();
    return 0;
}
u32 GXResetOverflowCount(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
volatile void* GXRedirectWriteGatherPipe(void* ptr) {
    UNIMPLEMENTED();
}
void GXRestoreWriteGatherPipe(void) {
    UNIMPLEMENTED();
}

void GXSetGPMetric(GXPerf0 perf0, GXPerf1 perf1) {
    SOFT_UNIMPLEMENTED();
}
void GXReadGPMetric(u32* cnt0, u32* cnt1) {
    SOFT_UNIMPLEMENTED();
}
void GXClearGPMetric(void) {
    SOFT_UNIMPLEMENTED();
}
u32 GXReadGP0Metric(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
u32 GXReadGP1Metric(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
void GXReadMemMetric(u32* cp_req, u32* tc_req, u32* cpu_rd_req, u32* cpu_wr_req, u32* dsp_req, u32* io_req, u32* vi_req, u32* pe_req, u32* rf_req, u32* fi_req) {
    SOFT_UNIMPLEMENTED();
}
void GXClearMemMetric(void) {
    SOFT_UNIMPLEMENTED();
}
void GXReadPixMetric(u32* top_pixels_in, u32* top_pixels_out, u32* bot_pixels_in, u32* bot_pixels_out, u32* clr_pixels_in, u32* copy_clks) {
    SOFT_UNIMPLEMENTED();
}
void GXClearPixMetric(void) {
    SOFT_UNIMPLEMENTED();
}
void GXSetVCacheMetric(GXVCachePerf attr) {
    SOFT_UNIMPLEMENTED();
}
void GXReadVCacheMetric(u32* check, u32* miss, u32* stall) {
    SOFT_UNIMPLEMENTED();
}
void GXClearVCacheMetric(void) {
    SOFT_UNIMPLEMENTED();
}
void GXInitXfRasMetric(void) {
    SOFT_UNIMPLEMENTED();
}
void GXReadXfRasMetric(u32* xf_wait_in, u32* xf_wait_out, u32* ras_busy, u32* clocks) {
    SOFT_UNIMPLEMENTED();
}
u32 GXReadClksPerVtx(void) {
    SOFT_UNIMPLEMENTED();
    return 0;
}
void GXSetLineWidth(u8 width, GXTexOffset texOffsets) {
    SOFT_UNIMPLEMENTED();
}
void GXSetPointSize(u8 pointSize, GXTexOffset texOffsets) {
    SOFT_UNIMPLEMENTED();
}
void GXEnableTexOffsets(GXTexCoordID coord, u8 line_enable, u8 point_enable) {
    SOFT_UNIMPLEMENTED();
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
