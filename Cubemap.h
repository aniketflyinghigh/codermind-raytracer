/*
    This file belongs to the Ray tracing tutorial of http://www.codermind.com/
    It is free to use for educational purpose and cannot be redistributed
    outside of the tutorial pages.
    Any further inquiry :
    mailto:info@codermind.com
 */

#ifndef __CUBEMAP_H
#define __CUBEMAP_H

#include "SimpleString.h"
#include "Def.h"
#include "Ray.h"

struct cubemap
{
	enum {
		up = 0,
		down = 1,
		right = 2,
		left = 3,
		forward = 4,
		backward = 5
	};
    SimpleString name[6];
    int sizeX, sizeY;
	color *texture; 
    float exposure;
    bool bExposed;
    bool bsRGB;
    cubemap() : sizeX(0), sizeY(0), texture(0), exposure(1.0f), bExposed(false), bsRGB(false) {};
    bool Init();
    void setExposure(float newExposure) {exposure = newExposure; }
    ~cubemap() { if (texture) delete []texture; }
};

color readCubemap(const cubemap & cm, const ray &myRay);

#endif  //__CUBEMAP_H
