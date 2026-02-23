add_library(tppc_os
        dvd.cpp
        vi.cpp
        pad.cpp
        card.cpp
        mwcc_intrinsics.cpp
        OSMemory_Windows.cpp
        OSArena.cpp
        OSMemory.cpp
        OSBootInfo.cpp
        OSThread.cpp
        OSTime.cpp
        OSThread_Windows.cpp
        OSMutex.cpp
        OSMessageQueue.cpp
        DVDInit.cpp
)

target_include_directories(tppc_os SYSTEM PRIVATE ../../include/)

target_sources(tppc_os PRIVATE os.cpp ppc.cpp)

target_link_libraries(tppc_os PRIVATE fmt::fmt)
target_link_libraries(tppc_os PRIVATE nod)
