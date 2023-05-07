#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "weapon.h"


void weapon::lightsaberL() {
	glPushMatrix();
	glTranslatef(0, -0.2, 0);
	glPushMatrix();
		glTranslatef(-0.1, 3, 0.23);
		glRotatef(90, 1.0, 0.0, 0.0);
		glColor3f(0, 0, 0);
		lineCylinder(0.05, 0.05, 0.8);
		glColor3f(0.6, 0.6, 0.6);
		fullCylinder(0.05, 0.05, 0.8);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-0.1, 2.8, 0.23);
		glRotatef(-90, 1.0, 0, 0);
		glColor3f(0, 0, 0);
		lineCone(0.1, 0.3);
		glColor3f(1.0, 0.2, 0.2);
		fullCone(0.1, 0.3);
	glPopMatrix();
	glPopMatrix();
}

void weapon::lightsaberR() {
	glPushMatrix();
		glTranslatef(0, -0.2, 0);
		glPushMatrix();
			glTranslatef(-0.1, 3, 1.05);
			glRotatef(90, 1.0, 0.0, 0.0);
			glColor3f(0, 0, 0);
			lineCylinder(0.05, 0.05, 0.8);
			glColor3f(0.6, 0.6, 0.6);
			fullCylinder(0.05, 0.05, 0.8);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.1, 2.8, 1.05);
			glRotatef(-90, 1.0, 0, 0);
			glColor3f(0, 0, 0);
			lineCone(0.1, 0.3);
			glColor3f(1.0, 0.2, 0.2);
			fullCone(0.1, 0.3);
		glPopMatrix();
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