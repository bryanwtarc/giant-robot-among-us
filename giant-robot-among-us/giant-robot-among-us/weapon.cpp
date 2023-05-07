#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "weapon.h"


void weapon::lightsaber() {
	glPushMatrix();
		glTranslatef(-0.23, 1.95, 0.44);
		glRotatef(90, 1.0, 0.0, 0.0);
		glColor3f(0.6, 0.6, 0.6);
		fullCylinder(0.1, 0.1, 0.5);
	glPopMatrix();
}

void weapon::gun() {
	glPushMatrix();
		glScalef(1, 2.0, 0.8);
		glTranslatef(0.05, 0.45, 1);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
}