/*
    This file belongs to the Ray tracing tutorial of http://www.codermind.com/
    It is free to use for educational purpose and cannot be redistributed
    outside of the tutorial pages.
    Any further inquiry :
    mailto:info@codermind.com
 */

#ifndef __BLOB_H
#define __BLOB_H

#include <vector>
#include "Def.h"
struct sphere;
struct ray;
struct material;

// Each blob is defined by a list of point source (in the centerList)
// that affects its potential field.
// We define each source to be equally potent, but we could
// have a different potential at each point source
// this is for illustration purpose only.

struct blob
{
    std::vector<point> centerList;
	float size;
    float invSizeSquare;
    int materialId;
};

extern bool isBlobIntersected(const ray &r, const blob &b, float &t);

extern void blobInterpolation(point &pos, const blob& b, vecteur &vOut);

extern void initBlobZones();

#endif // __BLOB_H
