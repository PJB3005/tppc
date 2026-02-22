#ifndef TPPC_OS_IMPL_HPP
#define TPPC_OS_IMPL_HPP

#include <dolphin/os.h>

#define UNIMPLEMENTED() OSPanic(__FILE__, __LINE__, "UNIMPLEMENTED: " __FUNCTION__ "\n")
#define SOFT_UNIMPLEMENTED() OSReport_Warning("UNIMPLEMENTED: " __FUNCTION__ "\n");

constexpr uintptr_t REAL_MEMORY_SIZE_MB = 64;
constexpr uintptr_t REAL_MEMORY_SIZE = REAL_MEMORY_SIZE_MB * 1024 * 1024;

constexpr uintptr_t ARENA_START_OFFSET = 0x4000;

extern void* RealMemoryStart;
extern void* RealMemoryEnd;

void TPPC_OSInitMemory();
void TPPC_FillBootInfo();
void TPPC_InitMainThread();
void TPPC_OSInitClock();

#endif  // TPPC_OS_IMPL_HPP
