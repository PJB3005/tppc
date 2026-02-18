add_library(tppc_os)

target_include_directories(tppc_os SYSTEM PRIVATE ../../include/)

target_sources(tppc_os PRIVATE os.cpp)

target_link_libraries(tppc_os PRIVATE fmt::fmt)
