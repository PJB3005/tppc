cmake_minimum_required(VERSION 3.23)
project(Tppc)

find_package(SDL3 CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(mimalloc CONFIG REQUIRED)

add_executable(Tppc
        tppc/OSAlloc_Mimalloc.cpp
        tests/tag_test.cpp
        tppc/TPPCWindows.cpp
        tppc/TPPC.hpp)

target_sources(
    Tppc
    PRIVATE
        tppc/main.cpp)

add_compile_definitions(TPPC=1 TPPC_DEBUG=1)
add_compile_definitions(VERSION=0) # VERSION_GCN_USA

if (MSVC)
    add_compile_options(/GR- /utf-8)
else ()
    add_compile_options(-Wno-microsoft-string-literal-from-predefined -fno-rtti)
endif ()

# Decompiled code
include(decompiled.cmake)

# Normal gamedev libs
target_link_libraries(Tppc PRIVATE SDL3::SDL3)
target_link_libraries(Tppc PRIVATE fmt::fmt)
target_link_libraries(Tppc PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)

add_subdirectory(tppc/os/)
add_subdirectory(tppc/gx/)
add_subdirectory(tppc/ar/)

target_link_libraries(Tppc PRIVATE tppc_os tppc_gx tppc_ar)

set_target_properties(Tppc tppc_os tppc_gx tppc_ar PROPERTIES CXX_STANDARD 20)

target_include_directories(Tppc SYSTEM PRIVATE include/)
