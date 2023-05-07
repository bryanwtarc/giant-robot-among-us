#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "Arms.h"


void Arms::upperArmLeft() {

	//Shoulder
	glPushMatrix();
		glScalef(1.3, 1.2, 1.5);
		glTranslatef(0, 1.85, -0.1);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
	//Shoulder Blade
	glPushMatrix();
		glTranslatef(0.2, 2.265, -0.1);
		glRotatef(55, 0, 0, 1.0);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
	//Shoulder Joint
	glPushMatrix();
		glScalef(1.3, 1.2, 1.5);
		glTranslatef(0.125, 1.975, -0.15);
		glColor3f(1.0, 0.2, 0.2);
		fullCylinder(0.1,0.1,0.35);
	glPopMatrix();
	//Joint cover
	glPushMatrix();
		glTranslatef(0.165, 2.265, -0.25);
		glRotatef(45, 0,0,1.0);
		glColor3f(0, 0, 0);
		lineCube(0.15);
		glColor3f(0.2, 0.2, 1.0);
		cube(0.15);
	glPopMatrix();
	//Arm
	glPushMatrix();
		glScalef(1, 3.5, 0.8);
		glTranslatef(0.05, 0.45, -0.175);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
}

void Arms::lowerArmLeft() {
	//Elbow connector
	glPushMatrix();
		glScalef(0.8, 2, 0.8);
		glTranslatef(0.1, 0.65, -0.15);
		glColor3f(0, 0, 0);
		lineCube(0.2);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.2);
	glPopMatrix();
	//Elbow joint
	glPushMatrix();
		glScalef(1, 1, 1.1);
		glTranslatef(0.16, 1.5, -0.15);
		glColor3f(1.0, 0.2, 0.2);
		fullCylinder(0.08, 0.08, 0.2);
	glPopMatrix();
	glPushMatrix();
		glScalef(1, 2.0, 0.8);
		glTranslatef(0.05, 0.45, -0.175);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
}