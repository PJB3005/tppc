#include <dolphin/gf.h>

#include "../os/os_impl.hpp"

void GFSetFog(GXFogType type, f32 startz, f32 endz, f32 nearz, f32 farz, GXColor color) {
    UNIMPLEMENTED();
}
void GFSetBlendModeEtc(GXBlendMode type, GXBlendFactor src_factor,
                       GXBlendFactor dst_factor, GXLogicOp logic_op,
                       u8 color_update_enable, u8 alpha_update_enable,
                       u8 dither_enable) {
    UNIMPLEMENTED();
}
void GFSetZMode(u8 compare_enable, GXCompare func, u8 update_enable) {
    UNIMPLEMENTED();
}
