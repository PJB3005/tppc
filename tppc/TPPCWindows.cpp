#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN 1

#include <Windows.h>

#include "TPPC.hpp"

void EnableVTProcessing() {
    SetConsoleOutputCP(CP_UTF8);

    auto stdout = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD consoleMode;
    GetConsoleMode(stdout, &consoleMode);
    SetConsoleMode(stdout, consoleMode | ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
}

#endif