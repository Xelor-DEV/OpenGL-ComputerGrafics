#pragma once
#include "Light.h"
class SpotLight : public Light
{
private:
    GLfloat direction[3]; // Direcci�n espec�fica para el SpotLight
    GLfloat cutoff;       // �ngulo de corte
    GLfloat exponent;     // Exponente para el atenuado

public:
    SpotLight(GLfloat ambient[4], GLfloat diffuse[4], GLfloat specular[4], GLfloat position[4], GLfloat direction[3], GLfloat cutoff, GLfloat exponent);
    void apply(int lightIndex) override;
};