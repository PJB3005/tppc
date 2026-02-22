#include "os_impl.hpp"

// DVD
void DVDInit(void) {
    SOFT_UNIMPLEMENTED();
}
int DVDReadAbsAsyncPrio(DVDCommandBlock* block, void* addr, s32 length, s32 offset, DVDCBCallback callback, s32 prio) {
    UNIMPLEMENTED();
}
int DVDSeekAbsAsyncPrio(DVDCommandBlock* block, s32 offset, DVDCBCallback callback, s32 prio) {
    UNIMPLEMENTED();
}
int DVDReadAbsAsyncForBS(DVDCommandBlock* block, void* addr, s32 length, s32 offset, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
int DVDReadDiskID(DVDCommandBlock* block, DVDDiskID* diskID, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
int DVDPrepareStreamAbsAsync(DVDCommandBlock* block, u32 length, u32 offset, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
int DVDCancelStreamAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDCancelStream(DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDStopStreamAtEndAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDStopStreamAtEnd(DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDGetStreamErrorStatusAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDGetStreamErrorStatus(DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDGetStreamPlayAddrAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDGetStreamPlayAddr(DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDGetStreamStartAddrAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDGetStreamStartAddr(DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDGetStreamLengthAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDGetStreamLength(DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDChangeDiskAsyncForBS(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
int DVDChangeDiskAsync(DVDCommandBlock* block, DVDDiskID* id, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDChangeDisk(DVDCommandBlock* block, DVDDiskID* id) {
    UNIMPLEMENTED();
}
int DVDStopMotorAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDStopMotor(DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDInquiryAsync(DVDCommandBlock* block, DVDDriveInfo* info, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDInquiry(DVDCommandBlock* block, DVDDriveInfo* info) {
    UNIMPLEMENTED();
}
void DVDReset(void) {
    UNIMPLEMENTED();
}
int DVDResetRequired(void) {
    UNIMPLEMENTED();
}
s32 DVDGetCommandBlockStatus(const DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
s32 DVDGetDriveStatus(void) {
    SOFT_UNIMPLEMENTED();
    return DVD_STATE_BUSY;
}
BOOL DVDSetAutoInvalidation(BOOL autoInval) {
    UNIMPLEMENTED();
}
void DVDPause(void) {
    UNIMPLEMENTED();
}
void DVDResume(void) {
    UNIMPLEMENTED();
}
int DVDCancelAsync(DVDCommandBlock* block, DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDCancel(volatile DVDCommandBlock* block) {
    UNIMPLEMENTED();
}
int DVDCancelAllAsync(DVDCBCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDCancelAll(void) {
    UNIMPLEMENTED();
}
DVDDiskID* DVDGetCurrentDiskID(void) {
    UNIMPLEMENTED();
}
BOOL DVDCheckDisk(void) {
    UNIMPLEMENTED();
}

// DVD FATAL
int DVDSetAutoFatalMessaging(BOOL enable) {
    UNIMPLEMENTED();
}

// DVD FS
s32 DVDConvertPathToEntrynum(const char* pathPtr) {
    return 0;
}
BOOL DVDFastOpen(s32 entrynum, DVDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}
BOOL DVDOpen(const char* fileName, DVDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}
BOOL DVDClose(DVDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}
BOOL DVDGetCurrentDir(char* path, u32 maxlen) {
    UNIMPLEMENTED();
}
BOOL DVDChangeDir(const char* dirName) {
    UNIMPLEMENTED();
}
BOOL DVDReadAsyncPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset,
                      DVDCallback callback, s32 prio) {
    UNIMPLEMENTED();
}
s32 DVDReadPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset, s32 prio) {
    UNIMPLEMENTED();
}
int DVDSeekAsyncPrio(DVDFileInfo* fileInfo, s32 offset, void (* callback)(s32, DVDFileInfo *), s32 prio) {
    UNIMPLEMENTED();
}
s32 DVDSeekPrio(DVDFileInfo* fileInfo, s32 offset, s32 prio) {
    UNIMPLEMENTED();
}
s32 DVDGetFileInfoStatus(const DVDFileInfo* fileInfo) {
    UNIMPLEMENTED();
}
BOOL DVDFastOpenDir(s32 entrynum, DVDDir* dir) {
    UNIMPLEMENTED();
}
int DVDOpenDir(const char* dirName, DVDDir* dir) {
    UNIMPLEMENTED();
}
int DVDReadDir(DVDDir* dir, DVDDirEntry* dirent) {
    UNIMPLEMENTED();
}
int DVDCloseDir(DVDDir* dir) {
    UNIMPLEMENTED();
}
void DVDRewindDir(DVDDir* dir) {
    UNIMPLEMENTED();
}
void* DVDGetFSTLocation(void) {
    UNIMPLEMENTED();
}
BOOL DVDPrepareStreamAsync(DVDFileInfo* fileInfo, u32 length, u32 offset, DVDCallback callback) {
    UNIMPLEMENTED();
}
s32 DVDPrepareStream(DVDFileInfo* fileInfo, u32 length, u32 offset) {
    UNIMPLEMENTED();
}
s32 DVDGetTransferredSize(DVDFileInfo* fileinfo) {
    UNIMPLEMENTED();
}

#define DVDReadAsync(fileInfo, addr, length, offset, callback) \
    DVDReadAsyncPrio((fileInfo), (addr), (length), (offset), (callback), 2)

// DVD ID UTILS
int DVDCompareDiskID(const DVDDiskID* id1, const DVDDiskID* id2) {
    UNIMPLEMENTED();
}
DVDDiskID* DVDGenerateDiskID(DVDDiskID* id, const char* game, const char* company, u8 diskNum, u8 version) {
    UNIMPLEMENTED();
}

// DVD LOW
BOOL DVDLowRead(void* addr, u32 length, u32 offset, DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowSeek(u32 offset, DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowWaitCoverClose(DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowReadDiskID(DVDDiskID* diskID, DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowStopMotor(DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowRequestError(DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowInquiry(DVDDriveInfo* info, DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowAudioStream(u32 subcmd, u32 length, u32 offset, DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowRequestAudioStatus(u32 subcmd, DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowAudioBufferConfig(BOOL enable, u32 size, DVDLowCallback callback) {
    UNIMPLEMENTED();
}
void DVDLowReset(void) {
    UNIMPLEMENTED();
}
DVDLowCallback DVDLowSetResetCoverCallback(DVDLowCallback callback) {
    UNIMPLEMENTED();
}
BOOL DVDLowBreak(void) {
    UNIMPLEMENTED();
}
DVDLowCallback DVDLowClearCallback(void) {
    UNIMPLEMENTED();
}
u32 DVDLowGetCoverStatus(void) {
    UNIMPLEMENTED();
}

// DVD QUEUE
void DVDDumpWaitingQueue(void) {
    UNIMPLEMENTED();
}