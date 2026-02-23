#include <nod.h>

#include "os_impl.hpp"

constexpr auto DVD_PATH = R"(E:\Projects\tp\orig\GZ2E01\tp.iso)";

static NodHandle* DiscHandle;
static NodHandle* DiscPart0Handle;

void TPPC_InitDVD() {
    auto result = nod_disc_open(DVD_PATH, {}, &DiscHandle);
    if (result != NOD_RESULT_OK) {
        OSReport_FatalError("Failed to open disc image: %s", nod_error_message());
    }

    result = nod_disc_open_partition(DiscHandle, 0, {}, &DiscPart0Handle);
    if (result != NOD_RESULT_OK) {
        OSReport_FatalError("Failed to open disc partition 0: %s", nod_error_message());
    }

}

