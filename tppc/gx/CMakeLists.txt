add_library(tppc_gx
        gd.cpp
        gf.cpp
        GXVert.cpp)

target_include_directories(tppc_gx SYSTEM PRIVATE ../../include/)

target_sources(tppc_gx PRIVATE gx.cpp)