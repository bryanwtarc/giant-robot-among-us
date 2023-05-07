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
		glTranslatef(0.16, 2.525, 0.04);
		glColor3f(0, 0, 0);
		lineTriPrism(0.33, 0.2, 0.375);
		glColor3f(0.8, 0.8, 0.8);
		triangularPrism(1, 1, 1);
	glPopMatrix();
	//Shoulder Joint
	glPushMatrix();
		glScalef(1.3, 1.2, 1.5);
		glTranslatef(0.125, 1.975, -0.15);
		glColor3f(1.0, 0.2, 0.2);
		fullCylinder(0.1,0.1,0.35);
		glColor3f(1, 1, 1);
		fulldisk(0, 0.1);
		glTranslatef(0, 0, 0.35);
		fulldisk(0, 0.1);
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
		glColor3f(1, 1, 1);
		fulldisk(0, 0.08);
		glTranslatef(0, 0, 0.2);
		fulldisk(0, 0.08);
	glPopMatrix();
}

void Arms::lowerWristLeft() {
	glPushMatrix();
		glScalef(1, 2.0, 0.8);
		glTranslatef(0.05, 0.45, -0.175);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
}

void Arms::upperArmRight() {
	//Shoulder
	glPushMatrix();
		glScalef(1.3, 1.2, 1.5);
		glTranslatef(0, 1.85, 0.695);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
	//Shoulder Blade
		glPushMatrix();
		glTranslatef(0.16, 2.525, 1.225);
		glRotatef(180, 0, 1, 0);
		glColor3f(0, 0, 0);
		lineTriPrism(0.33, 0.2, 0.375);
		glColor3f(0.8, 0.8, 0.8);
		triangularPrism(1, 1, 1);
	glPopMatrix();
	//Shoulder Joint
	glPushMatrix();
		glScalef(1.3, 1.2, 1.5);
		glTranslatef(0.125, 1.975, 0.635);
		glColor3f(1.0, 0.2, 0.2);
		fullCylinder(0.1, 0.1, 0.35);
		glColor3f(1, 1, 1);
		fulldisk(0, 0.1);
		glTranslatef(0, 0, 0.35);
		fulldisk(0, 0.1);
	glPopMatrix();
	//Joint cover
	glPushMatrix();
		glTranslatef(0.165, 2.265, 1.36);
		glRotatef(45, 0, 0, 1.0);
		glColor3f(0, 0, 0);
		lineCube(0.15);
		glColor3f(0.2, 0.2, 1.0);
		cube(0.15);
	glPopMatrix();
	//Arm
	glPushMatrix();
	glScalef(1, 3.5, 0.8);
		glTranslatef(0.05, 0.45, 1.5);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
}

void Arms::lowerArmRight() {
	//Elbow connector
	glPushMatrix();
		glScalef(0.8, 2, 0.8);
		glTranslatef(0.1, 0.65, 1.525);
		glColor3f(0, 0, 0);
		lineCube(0.2);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.2);
	glPopMatrix();
	//Elbow joint
	glPushMatrix();
		glScalef(1, 1, 1.1);
		glTranslatef(0.16, 1.5, 1.1);
		glColor3f(1.0, 0.2, 0.2);
		fullCylinder(0.08, 0.08, 0.2);
		glColor3f(1, 1, 1);
		fulldisk(0, 0.08);
		glTranslatef(0, 0, 0.2);
		fulldisk(0, 0.08);
	glPopMatrix();
}

void Arms::lowerWristRight() {
	glPushMatrix();
		glScalef(1, 2.0, 0.8);
		glTranslatef(0.05, 0.45, 1.5);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 0.8);
		cube(0.25);
	glPopMatrix();
}
