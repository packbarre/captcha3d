#ifndef COLOR_H
#define COLOR_H

#include <stdint.h>

#include "vector.h"
#include "letter.h"

#define Z_PROJECTION_CENTER 			600
#define DEFORMATION_SIN_AMPLITUDE		0.5
#define DEFORMATION_SIN_PERIOD			3.5

struct Color {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;
};

typedef struct {
    float ia;
    float ip;
    Vector3d direction;
} Light;

typedef struct {
    struct Color couleur;
    float ka;
    float kd;
    float ks;
    int n;
} Material;

struct Color random_color();

void compute_light_intensity(float tab[], Vector3d normales[], const Letter *letter, Light lumiere, Material materiau);
float angleDiffusion(Vector3d L, Vector3d N);
struct Color couleurAffichageGouraud(float coeff, struct Color couleur);
struct Color couleurAffichage(const Triangle *face, Material materiau, Light lumiere, const Letter *letter);

#endif