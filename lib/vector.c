#include <math.h>

#include "vector.h"

Vector3d vector_normalize(const Vector3d *vector)
{
    Vector3d normal = *vector;
    float size = sqrt((vector->x) * (vector->x) + (vector->y) * (vector->y) + (vector->z) * (vector->z));

    normal.x /= size;
    normal.y /= size;
    normal.z /= size;

    return normal;
}

Vector3d vector_add(const Vector3d *n1, const Vector3d *n2)
{
    Vector3d n;

    n.x = n1->x + n2->x;
    n.y = n1->y + n2->y;
    n.z = n1->z + n2->z;

    return n;
}

Vector2d vector_project(const Vector3d *p, const Vector3d *cp)
{
    Vector2d projection;

    projection.x = floor((p->x - cp->x) * (-cp->z) / (p->z - cp->z) + cp->x);
    projection.y = floor((p->y - cp->y) * (-cp->z) / (p->z - cp->z) + cp->y);

    return projection;
}
