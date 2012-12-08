/*
    This file belongs to the Ray tracing tutorial of http://www.codermind.com/
    It is free to use for educational purpose and cannot be redistributed
    outside of the tutorial pages.
    Any further inquiry :
    mailto:info@codermind.com
 */

#ifndef __SCENE_H
#define __SCENE_H
#include <vector>
#include "Raytrace.h"
#include "Blob.h"

struct perspective {
    enum {
        orthogonal = 0,
        conic = 1
    } type;

    float FOV;
    float clearPoint;
    float dispersion;
    float invProjectionDistance;
};


struct scene {
    std::vector<material> materialContainer;
	std::vector<sphere>   sphereContainer;
	std::vector<blob>     blobContainer;
	std::vector<light>    lightContainer;
    int sizex, sizey;
    cubemap               cm;
    perspective           persp;
    struct {
        float fMidPoint;
        float fPower;
        float fBlack;
        float fPowerScale;
    }                     tonemap;
    int                   complexity;
};

struct context {
    float fRefractionCoef;
    color cLightScattering;
    int   level;

    static const context & getDefaultAir() 
    {
        static context airContext = {1.0f, {0.0f,0.0f,0.0f}, 0};
        return airContext;
    };
};

bool init(char* inputName, scene &myScene);

#endif // __SCENE_H
