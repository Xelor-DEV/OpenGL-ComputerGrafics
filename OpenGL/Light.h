#pragma once
#include "IncludeGL.h"

class Light
{
protected:
    GLfloat ambient[4];
    GLfloat diffuse[4];
    GLfloat specular[4];
    GLfloat positionDirection[4]; // Posici�n para PointLight y SpotLight, Direcci�n para DirectionalLight

public:
    Light(GLfloat ambient[4], GLfloat diffuse[4], GLfloat specular[4], GLfloat positionDirection[4]);
    virtual void apply(int lightIndex) = 0;
};

