#ifndef TPPC_COMPAT_H
#define TPPC_COMPAT_H

// TPPC compat file

#define __frsqrte(val) (1 / sqrtf((val)))
#define __fabsf(val) fabsf(val)

#define M_PI 3.14159265358979323846f
#define M_SQRT3 1.73205f

#define DEG_TO_RAD(degrees) (degrees * (M_PI / 180.0f))
#define RAD_TO_DEG(radians) (radians * (180.0f / M_PI))

#define MAXFLOAT FLT_MAX

#endif // # TPPC_COMPAT_H
