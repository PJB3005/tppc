#include "dolphin/dsp.h"

#include "../os/os_impl.hpp"

u32 DSPCheckMailToDSP(void) {
    UNIMPLEMENTED();
}
u32 DSPCheckMailFromDSP(void) {
    UNIMPLEMENTED();
}
u32 DSPReadCPUToDSPMbox(void) {
    UNIMPLEMENTED();
}
u32 DSPReadMailFromDSP(void) {
    UNIMPLEMENTED();
}
void DSPSendMailToDSP(u32 mail) {
    UNIMPLEMENTED();
}
void DSPAssertInt(void) {
    UNIMPLEMENTED();
}
void DSPInit(void) {
    UNIMPLEMENTED();
}
BOOL DSPCheckInit(void) {
    UNIMPLEMENTED();
}
void DSPReset(void) {
    UNIMPLEMENTED();
}
void DSPHalt(void) {
    UNIMPLEMENTED();
}
void DSPUnhalt(void) {
    UNIMPLEMENTED();
}
u32 DSPGetDMAStatus(void) {
    UNIMPLEMENTED();
}

/*
DSPTaskInfo* DSPAddTask(DSPTaskInfo* task) {
    UNIMPLEMENTED();
}
*/

DSPTaskInfo* DSPCancelTask(DSPTaskInfo* task) {
    UNIMPLEMENTED();
}
DSPTaskInfo* DSPAssertTask(DSPTaskInfo* task) {
    UNIMPLEMENTED();
}

DSPTaskInfo* __DSP_first_task;
DSPTaskInfo* __DSP_last_task;
DSPTaskInfo* __DSP_curr_task;
DSPTaskInfo* __DSP_tmp_task;

extern "C" {
    /*void __DSPHandler(__OSInterrupt, OSContext*) {
        UNIMPLEMENTED();
    }*/
    void __DSP_exec_task(DSPTaskInfo*, DSPTaskInfo*) {
        UNIMPLEMENTED();
    }
    void __DSP_boot_task(DSPTaskInfo*) {
        UNIMPLEMENTED();
    }
    void __DSP_insert_task(DSPTaskInfo*) {
        UNIMPLEMENTED();
    }
    void __DSP_add_task(DSPTaskInfo* task) {
        UNIMPLEMENTED();
    }
    void __DSP_remove_task(DSPTaskInfo* task) {
        UNIMPLEMENTED();
    }
    void __DSP_debug_printf(const char* fmt, ...) {
        UNIMPLEMENTED();
    }
}
