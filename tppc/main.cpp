#include <SDL3/SDL_main.h>
#include <SDL3/SDL_version.h>
#include <fmt/base.h>

// Actual TP main.
void main01(void);

int main(int argc, char* argv[]) {
    fmt::print("Main!\n");

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        fmt::print("SDL_Init failed!\n");
        return 1;
    }

    fmt::print("SDL version: {}\n", SDL_GetVersion());

    main01();

    return 0;
}
