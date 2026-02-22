#include <chrono>

#include "os_impl.hpp"

namespace chrono = std::chrono;
using TickDuration = chrono::duration<s64, std::ratio<1, OS_TIMER_CLOCK>>;

OSTick OSGetTick(void) {
    return OSGetTime() & 0xFFFFFFFF;
}

OSTime OSGetTime(void) {
    auto clockTime = chrono::steady_clock::now().time_since_epoch();
    auto ticksTotal = chrono::duration_cast<TickDuration>(clockTime);
    return ticksTotal.count();
}

void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* td) {
    UNIMPLEMENTED();
}
OSTime OSCalendarTimeToTicks(OSCalendarTime* td) {
    UNIMPLEMENTED();
}

void TPPC_OSInitClock() {

}
