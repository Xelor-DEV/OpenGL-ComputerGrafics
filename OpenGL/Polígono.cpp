#include "Pol�gono.h"
#include "IncludeGL.h"

void Pol�gono::Draw()
{
    glBegin(GL_POLYGON);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);   
    glEnd();
}