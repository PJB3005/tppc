#include <dolphin/os/OSMutex.h>

#include <mutex>

#include "os_impl.hpp"

static_assert(sizeof(std::mutex) <= sizeof(OSMutex), "Not enough space in OSMutex for std::mutex!");
static_assert(alignof(std::mutex) <= alignof(OSMutex));

static_assert(sizeof(std::condition_variable) <= sizeof(OSCond), "Not enough space in OSCond for std::condition_variable!");
static_assert(alignof(std::condition_variable) <= alignof(OSCond));

void OSLockMutex(OSMutex* mutex) {
    auto realMut = reinterpret_cast<std::mutex*>(mutex);
    realMut->lock();
}

void OSInitMutex(OSMutex* mutex) {
    auto realMut = reinterpret_cast<std::mutex*>(mutex);
    new (realMut) std::mutex();
}

void OSUnlockMutex(OSMutex* mutex) {
    auto realMut = reinterpret_cast<std::mutex*>(mutex);
    realMut->unlock();
}

BOOL OSTryLockMutex(OSMutex* mutex) {
    auto realMut = reinterpret_cast<std::mutex*>(mutex);
    return realMut->try_lock() ? TRUE : FALSE;
}

void OSInitCond(OSCond* cond) {
    auto realCond = reinterpret_cast<std::condition_variable*>(cond);
    new (realCond) std::condition_variable();
}

void OSWaitCond(OSCond* cond, OSMutex* mutex) {
    auto realCond = reinterpret_cast<std::condition_variable*>(cond);
    auto realMut = reinterpret_cast<std::mutex*>(mutex);

    auto mutex_lock = std::unique_lock(*realMut, std::adopt_lock);
    realCond->wait(mutex_lock);
}

void OSSignalCond(OSCond* cond) {
    auto realCond = reinterpret_cast<std::condition_variable*>(cond);
    realCond->notify_all();
}
