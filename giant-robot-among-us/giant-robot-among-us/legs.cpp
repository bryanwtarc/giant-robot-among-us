#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "legs.h"

void Legs::gundamLegs() {
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//feet
	glScalef(3.0, 3.0, 3.0);
	glPushMatrix();
	glBegin(GL_QUADS);
	//face 1
	glVertex3f(0.1, 0, -0.15);
	glVertex3f(0.1, 0, -0.2);
	glVertex3f(0.05, 0, -0.2);
	glVertex3f(0.05, 0, -0.15);
	//face 2
	glVertex3f(0.05, 0, -0.15);
	glVertex3f(0.1, 0, -0.15);
	glVertex3f(0.1, 0.025, -0.15);
	glVertex3f(0.05, 0.025, -0.15);
	//face 3
	glVertex3f(0.05, 0.025, -0.15);
	glVertex3f(0.05, 0.025, -0.2);
	glVertex3f();
	glVertex3f();
	glEnd();
	glPopMatrix();
}
