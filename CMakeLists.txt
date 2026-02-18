cmake_minimum_required(VERSION 3.23)

project(Tppc)

find_package(SDL3 CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_executable(Tppc)

target_sources(
    Tppc
    PRIVATE
        tppc/main.cpp)

add_compile_definitions(DEBUG=1 TPPC=1)

target_link_libraries(Tppc PRIVATE SDL3::SDL3)
target_link_libraries(Tppc PRIVATE mtx)
target_link_libraries(Tppc PRIVATE fmt::fmt)

add_subdirectory(tppc/os/)
target_link_libraries(Tppc PRIVATE tppc_os)

target_include_directories(Tppc SYSTEM PRIVATE include/)

include(decompiled.cmake)
