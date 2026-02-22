#include <dolphin/card.h>

#include "os_impl.hpp"

s32 CARDRenameAsync(s32 chan, const char* oldName, const char* newName, CARDCallback callback) {
    UNIMPLEMENTED();
}

// CARDBios
void CARDInit(void) {
    SOFT_UNIMPLEMENTED();
}
s32 CARDGetResultCode(s32 chan) {
    UNIMPLEMENTED();
}
s32 CARDFreeBlocks(s32 chan, s32* byteNotUsed, s32* filesNotUsed) {
    UNIMPLEMENTED();
}
s32 CARDGetEncoding(s32 chan, u16* encode) {
    UNIMPLEMENTED();
}
s32 CARDGetMemSize(s32 chan, u16* size) {
    UNIMPLEMENTED();
}
s32 CARDGetSectorSize(s32 chan, u32* size) {
    UNIMPLEMENTED();
}
const DVDDiskID* CARDGetDiskID(s32 chan) {
    UNIMPLEMENTED();
}
s32 CARDSetDiskID(s32 chan, const DVDDiskID* diskID) {
    UNIMPLEMENTED();
}
BOOL CARDSetFastMode(BOOL enable) {
    UNIMPLEMENTED();
}
BOOL CARDGetFastMode(void) {
    UNIMPLEMENTED();
}
s32 CARDGetCurrentMode(s32 chan, u32* mode) {
    UNIMPLEMENTED();
}

// CARDCheck
s32 CARDCheckExAsync(s32 chan, s32* xferBytes, CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDCheckAsync(s32 chan, CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDCheckEx(s32 chan, s32* xferBytes) {
    UNIMPLEMENTED();
}
s32 CARDCheck(s32 chan) {
    UNIMPLEMENTED();
}

// CARDCreate
s32 CARDCreateAsync(s32 chan, const char* fileName, u32 size, CARDFileInfo* fileInfo,
                    CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDCreate(s32 chan, const char* fileName, u32 size, CARDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}

// CARDDelete
s32 CARDFastDeleteAsync(s32 chan, s32 fileNo, CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDFastDelete(s32 chan, s32 fileNo) {
    UNIMPLEMENTED();
}
s32 CARDDeleteAsync(s32 chan, const char* fileName, CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDDelete(s32 chan, const char* fileName) {
    UNIMPLEMENTED();
}

// CARDErase
s32 CARDEraseAsync(CARDFileInfo* fileInfo, s32 length, s32 offset, CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDErase(CARDFileInfo* fileInfo, s32 length, s32 offset) {
    UNIMPLEMENTED();
}

// CARDFormat
s32 CARDFormat(s32 chan) {
    UNIMPLEMENTED();
}

// CARDMount
int CARDProbe(s32 chan) {
    UNIMPLEMENTED();
}
s32 CARDProbeEx(s32 chan, s32* memSize, s32* sectorSize) {
    UNIMPLEMENTED();
}
s32 CARDMountAsync(s32 chan, void* workArea, CARDCallback detachCallback,
                   CARDCallback attachCallback) {
    UNIMPLEMENTED();
}
s32 CARDMount(s32 chan, void* workArea, CARDCallback detachCallback) {
    UNIMPLEMENTED();
}
s32 CARDUnmount(s32 chan) {
    UNIMPLEMENTED();
}

// CARDNet
u16 CARDSetVendorID(u16 vendorID) {
    UNIMPLEMENTED();
}
u16 CARDGetVendorID() {
    UNIMPLEMENTED();
}
s32 CARDGetSerialNo(s32 chan, u64* serialNo) {
    UNIMPLEMENTED();
}
s32 CARDGetUniqueCode(s32 chan, u64* uniqueCode) {
    UNIMPLEMENTED();
}
s32 CARDGetAttributes(s32 chan, s32 fileNo, u8* attr) {
    UNIMPLEMENTED();
}
s32 CARDSetAttributesAsync(s32 chan, s32 fileNo, u8 attr, CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDSetAttributes(s32 chan, s32 fileNo, u8 attr) {
    UNIMPLEMENTED();
}

// CARDOpen
s32 CARDFastOpen(s32 chan, s32 fileNo, CARDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}
s32 CARDOpen(s32 chan, const char* fileName, CARDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}
s32 CARDClose(CARDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}

// CARDProgram
s32 CARDProgramAsync(CARDFileInfo* fileInfo, void* buf, s32 length, s32 offset,
                     CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDProgram(CARDFileInfo* fileInfo, void* buf, s32 length, s32 offset) {
    UNIMPLEMENTED();
}

// CARDRdwr
s32 CARDGetXferredBytes(s32 chan) {
    UNIMPLEMENTED();
}

// CARDRead
s32 CARDReadAsync(CARDFileInfo* fileInfo, void* buf, s32 length, s32 offset,
                  CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDRead(CARDFileInfo* fileInfo, void* buf, s32 length, s32 offset) {
    UNIMPLEMENTED();
}
s32 CARDCancel(CARDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}

// CARDRename
s32 CARDRename(s32 chan, const char* oldName, const char* newName) {
    UNIMPLEMENTED();
}

// CARDStat
s32 CARDGetStatus(s32 chan, s32 fileNo, CARDStat* stat) {
    UNIMPLEMENTED();
}
s32 CARDSetStatusAsync(s32 chan, s32 fileNo, CARDStat* stat, CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDSetStatus(s32 chan, s32 fileNo, CARDStat* stat) {
    UNIMPLEMENTED();
}

// CARDWrite
s32 CARDWriteAsync(CARDFileInfo* fileInfo, void* buf, s32 length, s32 offset,
                   CARDCallback callback) {
    UNIMPLEMENTED();
}
s32 CARDWrite(CARDFileInfo* fileInfo, void* buf, s32 length, s32 offset) {
    UNIMPLEMENTED();
}
