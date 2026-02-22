#include <dolphin/os/OSMessage.h>

#include "os_impl.hpp"

void OSInitMessageQueue(OSMessageQueue* mq, void* msgArray, s32 msgCount) {
    OSInitMutex(&mq->mutex);
    OSInitCond(&mq->sendEvent);
    OSInitCond(&mq->receiveEvent);

    mq->msgArray = msgArray;
    mq->msgCount = msgCount;
    mq->firstIndex = 0;
    mq->usedCount = 0;
}

int OSSendMessage(OSMessageQueue* mq, void* msg, s32 flags) {
    OSLockMutex(&mq->mutex);
    while (true) {
        if (mq->usedCount >= mq->msgCount) {
            // Queue full.
            if (!(flags & OS_MESSAGE_BLOCK)) {
                OSUnlockMutex(&mq->mutex);
                return 0;
            }

            OSWaitCond(&mq->sendEvent, &mq->mutex);
        }
        break;
    }

    auto lastIndex = (mq->firstIndex + mq->usedCount) % mq->msgCount;
    static_cast<void**>(mq->msgArray)[lastIndex] = msg;
    mq->usedCount++;

    OSSignalCond(&mq->receiveEvent);
    OSUnlockMutex(&mq->mutex);
    return 1;
}

int OSReceiveMessage(OSMessageQueue* mq, void* msg, s32 flags) {
    OSLockMutex(&mq->mutex);

    while (true) {
        if (mq->usedCount == 0) {
            // Queue empty.
            if (!(flags & OS_MESSAGE_BLOCK)) {
                OSUnlockMutex(&mq->mutex);
                return 0;
            }

            OSWaitCond(&mq->sendEvent, &mq->mutex);
        }
        break;
    }

    if (msg != nullptr) {
        *static_cast<void**>(msg) = static_cast<void**>(mq->msgArray)[mq->firstIndex];
    }

    mq->firstIndex = (mq->firstIndex + 1) % mq->msgCount;
    mq->usedCount--;

    OSSignalCond(&mq->sendEvent);
    OSUnlockMutex(&mq->mutex);
    return 1;
}

int OSJamMessage(OSMessageQueue* mq, void* msg, s32 flags) {
    UNIMPLEMENTED();
}
