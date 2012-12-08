/*
    This file belongs to the Ray tracing tutorial of http://www.codermind.com/
    It is free to use for educational purpose and cannot be redistributed
    outside of the tutorial pages.
    Any further inquiry :
    mailto:info@codermind.com
 */

#ifndef __TEXTURE_H
#define __TEXTURE_H

#include "Def.h"

color readTexture(const color* tab, float u, float v, int sizeU, int sizeV);

#endif  //__TEXTURE_H
