#include <global.h>

#include <bit>
#include <cstring>

#include "os_impl.hpp"

int __cntlzw(unsigned int val) {
    return std::countl_zero(val);
}
int __rlwimi(int, int, int, int, int) {
    UNIMPLEMENTED();

}
void __dcbf(void*, int) {
    UNIMPLEMENTED();

}
void __dcbz(void*, int) {
    UNIMPLEMENTED();

}
void __sync() {
    UNIMPLEMENTED();

}
int __abs(int) {
    UNIMPLEMENTED();

}
void* __memcpy(void* dst, const void* src, int size) {
    return memcpy(dst, src, size);
}