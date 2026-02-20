#include <cassert>

#include "global.h"
#include "os_impl.hpp"

void* ArenaLow;
void* ArenaHigh;

void* OSGetArenaHi(void) {
    return ArenaHigh;
}

void* OSGetArenaLo(void) {
    return ArenaLow;
}

void OSSetArenaHi(void* newHi) {
    assert(newHi <= RealMemoryEnd && newHi >= RealMemoryStart);
    ArenaHigh = newHi;
}

void OSSetArenaLo(void* newLo) {
    assert(newLo <= RealMemoryEnd && newLo >= RealMemoryStart);
    ArenaLow = newLo;
}

void* OSAllocFromArenaLo(const u32 size, const u32 align) {
    void* ptr = OSGetArenaLo();
    auto arenaLo = static_cast<u8*>(ptr = reinterpret_cast<void*>(ROUND64(ptr, align)));
    arenaLo += size;
    arenaLo = reinterpret_cast<u8*>(ROUND64(arenaLo, align));
    OSSetArenaLo(arenaLo);
    return ptr;
}

void* OSAllocFromArenaHi(const u32 size, const u32 align) {
    void* ptr;

    auto arenaHi = static_cast<u8*>(OSGetArenaHi());
    arenaHi = reinterpret_cast<u8*>(TRUNC64(arenaHi, align));
    arenaHi -= size;
    arenaHi = static_cast<u8*>(ptr = reinterpret_cast<void*>(TRUNC64(arenaHi, align)));
    OSSetArenaHi(arenaHi);
    return ptr;
}
