#ifndef TPPC_OS_IMPL_HPP
#define TPPC_OS_IMPL_HPP

#include <dolphin/os.h>

#define UNIMPLEMENTED() OSPanic(__FILE__, __LINE__, "UNIMPLEMENTED: " __FUNCTION__)
#define SOFT_UNIMPLEMENTED() OSReport_Warning("UNIMPLEMENTED: " __FUNCTION__);

#endif  // TPPC_OS_IMPL_HPP
