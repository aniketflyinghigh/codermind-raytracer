/*
    This file belongs to the Ray tracing tutorial of http://www.codermind.com/
    It is free to use for educational purpose and cannot be redistributed
    outside of the tutorial pages.
    Any further inquiry :
    mailto:info@codermind.com
 */

#ifndef __RAYTRACE_H
#define __RAYTRACE_H

#include "Def.h"
#include "Texture.h"
#include "Cubemap.h"

struct material {
    enum {
        gouraud=0,
        noise=1,
        marble=2,
        turbulence=3
    } type;

    color diffuse;
    //Second diffuse color, optional for the procedural materials
    color diffuse2; 
    float bump, reflection, refraction, density;
    color specular;
    float power;
};

struct sphere {
	point pos;
	float size;
	int materialId;
};

struct light {
	point pos;
	color intensity;
};

#define invsqrtf(x) (1.0f / sqrtf(x))

#endif // __RAYTRACE_H
