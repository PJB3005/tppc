#include <assert.h>

#include <dolphin/os/OSAlloc.h>
#include "global.h"

#include "os_impl.hpp"

void* OSInitAlloc(void* arenaStart, void* arenaEnd, int maxHeaps) {
    // OS allocator is not actually used by TP. Can skip this.

    UNUSED(arenaEnd);
    UNUSED(maxHeaps);
    return arenaStart;
}

void* OSPhysicalToCached(u32 paddr) {
    assert (paddr <= REAL_MEMORY_SIZE);
    return POINTER_ADD(RealMemoryStart, paddr);
}

void* OSPhysicalToUncached(u32 paddr) {
    UNIMPLEMENTED();
}

u32 OSCachedToPhysical(void* caddr) {
    UNIMPLEMENTED();
}

u32 OSUncachedToPhysical(void* ucaddr) {
    UNIMPLEMENTED();
}

void* OSCachedToUncached(void* caddr) {
    UNIMPLEMENTED();
}

void* OSUncachedToCached(void* ucaddr) {
    UNIMPLEMENTED();
}

