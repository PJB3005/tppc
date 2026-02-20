add_library(tppc_ar
        ai.cpp
        dsp.cpp)

target_include_directories(tppc_ar SYSTEM PRIVATE ../../include/)

target_sources(tppc_ar PRIVATE ar.cpp)