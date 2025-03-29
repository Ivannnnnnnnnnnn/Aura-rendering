#ifndef AURA_MATH_H
#define AURA_MATH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <math.h>

    // 2D Vector Structure
    typedef struct {
        float x, y;
    } Vec2;

    // 3D Vector Structure
    typedef struct {
        float x, y, z;
    } Vec3;

    // 4D Vector Structure
    typedef struct {
        float x, y, z, w;
    } Vec4;

    // Function Declarations
    Vec2 vec2_add(Vec2 a, Vec2 b);
    Vec2 vec2_sub(Vec2 a, Vec2 b);
    Vec2 vec2_scale(Vec2 v, float scalar);
    float vec2_dot(Vec2 a, Vec2 b);
    float vec2_length(Vec2 v);
    Vec2 vec2_normalize(Vec2 v);

    Vec3 vec3_add(Vec3 a, Vec3 b);
    Vec3 vec3_sub(Vec3 a, Vec3 b);
    Vec3 vec3_scale(Vec3 v, float scalar);
    float vec3_dot(Vec3 a, Vec3 b);
    Vec3 vec3_cross(Vec3 a, Vec3 b);
    float vec3_length(Vec3 v);
    Vec3 vec3_normalize(Vec3 v);

#ifdef __cplusplus
}
#endif

#endif // AURA_MATH_H
