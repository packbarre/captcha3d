#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include "captcha3d.h"
#include "vector.h"

#define Z_PROJECTION_CENTER 			600
#define DEFORMATION_SIN_AMPLITUDE		0.5
#define DEFORMATION_SIN_PERIOD			3.5

typedef struct {
    int a;
    int b;
    int c;
} Triangle;

typedef struct {
    size_t pointsNumber;
    Vector3d points[500];
    size_t facesNumber;
    Triangle faces[800];
} Letter;

typedef struct {
    float ia;
    float ip;
    Vector3d direction;
} Light;

typedef struct {
    struct captcha3d_color couleur;
    float ka;
    float kd;
    float ks;
    int n;
} Material;

typedef struct {
    Vector2d p;
    float i;
} Projection;

#endif
