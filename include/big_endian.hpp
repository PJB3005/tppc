#ifndef TPPC_BIG_ENDIAN_HPP
#define TPPC_BIG_ENDIAN_HPP

#include <dolphin/types.h>

/*
 * Declares a big-endian integer type.
 */
template<class T>
struct BE {
    T inner;
    T host() const;
};

#define BINOP(op)                                            \
template<class TA, class TB>                                 \
constexpr auto operator op(const TA a, const BE<TB> b) {     \
    return a op b.host();                                    \
}                                                            \
                                                             \
template<class TA, class TB>                                 \
constexpr auto operator op(const BE<TA> a, const TB b) {     \
    return a.host() op b;                                    \
}                                                            \
                                                             \
template<class TA, class TB>                                 \
constexpr auto operator op(const BE<TA> a, const BE<TB> b) { \
    return a.host() op b.host();                             \
}

BINOP(+)
BINOP(-)
BINOP(*)
BINOP(/)

BINOP(==)
BINOP(!=)
BINOP(<)
BINOP(>)
BINOP(<=)
BINOP(>=)

#undef BINOP

template<class TA, class TB>
constexpr TA& operator+=(TA& a, const BE<TB> b) {
    a += b.host();
    return a;
}

template<class TA, class TB>
constexpr TA& operator-=(TA& a, const BE<TB> b) {
    a -= b.host();
    return a;
}

#if TPPC
template<>
inline u16 BE<u16>::host() const {
    return ((inner & 0xFF) << 8) | ((inner & 0xFF00) >> 8);
}

template<>
inline s16 BE<s16>::host() const {
    return static_cast<s16>(reinterpret_cast<const BE<u16>*>(this)->host());
}

template<>
inline u32 BE<u32>::host() const {
    return ((inner & 0xFF) << 24) | ((inner & 0xFF00) << 8)
        | ((inner & 0xFF0000) >> 8) | ((inner & 0xFF000000) >> 24);
}

template<>
inline s32 BE<s32>::host() const {
    return static_cast<s32>(reinterpret_cast<const BE<u32>*>(this)->host());
}

template<>
inline u64 BE<u64>::host() const {
    return (inner & 0x00000000000000FF) << 56
        | (inner & 0x000000000000FF00) << 40
        | (inner & 0x0000000000FF0000) << 24
        | (inner & 0x00000000FF000000) << 8
        | (inner & 0x000000FF00000000) >> 8
        | (inner & 0x0000FF0000000000) >> 24
        | (inner & 0x00FF000000000000) >> 40
        | (inner & 0xFF00000000000000) >> 56;
}

template<>
inline s64 BE<s64>::host() const {
    return static_cast<s64>(reinterpret_cast<const BE<u64>*>(this)->host());
}
#endif

#endif  // TPPC_BIG_ENDIAN_HPP
