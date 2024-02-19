#ifndef TYPES_H
#define TYPES_H

#define PI 3.14159265359f
#define TAU (2*PI)
#define PI_2 (PI/2)
#define PI_4 (PI/4)

#define DEG2RAD(_d) ((_d) * (PI / 180))
#define RAD2DEG(_r) ((_r) * (180 / PI))

#define true 1
#define false 0

typedef char i8;
typedef short i16;
typedef int i32;
typedef long i64;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;

typedef float f32;
typedef double f64;

typedef struct v2_s {
    f32 x;
    f32 y;
} v2;

#endif