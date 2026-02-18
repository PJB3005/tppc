#include <dolphin/os.h>
#include <fmt/base.h>
#include <cstdlib>

void OSPanic(const char* file, int line, const char* msg, ...) {
    fmt::print("ABORT [{}:{}] {}", file, line, msg);
    abort();
}
