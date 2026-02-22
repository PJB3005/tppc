#define WIN32_LEAN_AND_MEAN 1

#include <SDL3/SDL_main.h>
#include <SDL3/SDL_version.h>
#include <fmt/base.h>

#include <Windows.h>

#include "os/os_impl.hpp"

// Actual TP main.
void main01(void);

int main(int argc, char* argv[]) {
    TPPC_OSInitMemory();
    TPPC_InitMainThread();
    TPPC_OSInitClock();

    fmt::print("Main!\n");

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        fmt::print("SDL_Init failed!\n");
        return 1;
    }

    fmt::print("SDL version: {}\n", SDL_GetVersion());

    main01();

    return 0;
}
