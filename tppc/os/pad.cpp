#include <dolphin/pad.h>

#include "os_impl.hpp"

int PADReset(u32 mask) {
    UNIMPLEMENTED();
}
BOOL PADRecalibrate(u32 mask) {
    UNIMPLEMENTED();
}
BOOL PADInit() {
    UNIMPLEMENTED();
}
u32 PADRead(PADStatus* status) {
    UNIMPLEMENTED();
}
void PADSetSamplingRate(u32 msec) {
    UNIMPLEMENTED();
}
void __PADTestSamplingRate(u32 tvmode) {
    UNIMPLEMENTED();
}
void PADControlAllMotors(const u32* commandArray) {
    UNIMPLEMENTED();
}
void PADControlMotor(s32 chan, u32 command) {
    UNIMPLEMENTED();
}
void PADSetSpec(u32 spec) {
    UNIMPLEMENTED();
}
u32 PADGetSpec() {
    UNIMPLEMENTED();
}
int PADGetType(s32 chan, u32* type) {
    UNIMPLEMENTED();
}
BOOL PADSync(void) {
    UNIMPLEMENTED();
}
void PADSetAnalogMode(u32 mode) {
    UNIMPLEMENTED();
}
BOOL __PADDisableRecalibration(BOOL disable) {
    UNIMPLEMENTED();
}
BOOL PADIsBarrel(s32 chan) {
    UNIMPLEMENTED();
}

PADSamplingCallback PADSetSamplingCallback(PADSamplingCallback callback) {
    UNIMPLEMENTED();
}

// Padclamp
void PADClamp(PADStatus* status) {
    UNIMPLEMENTED();
}
void PADClampCircle(PADStatus* status) {
    UNIMPLEMENTED();
}
