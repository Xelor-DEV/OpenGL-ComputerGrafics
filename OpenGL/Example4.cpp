#include "Example4.h"

GLfloat lightTestPosition[3] = {2,2,2};
GLfloat solidSphere[3] = { 0,0,0 };

Example4::Example4()
{

}

void Example4::init()
{

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	glEnable(GL_DEPTH_TEST);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);

}

void Example4::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    Draw3DAxis(50);
    SetupLightingTest();
    DrawSphere(solidSphere , 0.8f);
	glFlush();
}

void Example4::SetupLightingTest()
{
    DrawSphere(lightTestPosition , 0.2f);

    // Activar el uso de iluminación
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0); // Activar la luz 0

    // Definición de propiedades de la luz
    GLfloat ambientLight[] = { 0.2f, 0.2f, 0.2f, 1.0f };  // Luz ambiental
    GLfloat diffuseLight[] = { 0.8f, 0.8f, 0.8f, 1.0f };  // Luz difusa
    GLfloat specularLight[] = { 1.0f, 1.0f, 1.0f, 1.0f }; // Luz especular
    GLfloat lightPosition[] = { lightTestPosition[0], lightTestPosition[1], lightTestPosition[2], 1.0f }; // Posición de la luz en el espacio

                                                                                                          // Establecer propiedades de la luz
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);
    // Posición de la luz
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
}

void Example4::DrawSphere(GLfloat position[3] , float radius)
{
    glPushMatrix();
    glTranslatef(position[0], position[1], position[2]);
    glutSolidSphere(radius, 50, 50);   // Dibujar esfera con radio 1.0, con 50 segmentos
    glPopMatrix();
}

void Example4::KeyboardFunc(unsigned char key, int X, int Y)
{

}

void Example4::Idle()
{

}


