#include "os_impl.hpp"

void TPPC_FillBootInfo() {
    const auto info = static_cast<OSBootInfo*>(OSPhysicalToCached(0));

    info->memorySize = REAL_MEMORY_SIZE;
}
