#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "LondonBridge.h"

void LondonBridge::tower() {
	glPushMatrix();					//Tower
		glColor4f(0.78, 0.78, 0.78, 1);
		glScalef(1.0, 2.0, 1.0);
		glTranslatef(-0.8, 0, 0);
		cube(0.5);
		glColor3f(0.1, 0.1, 0.1);
		lineCube(0.5);
	glPopMatrix();
}

void LondonBridge::roof() {
	glPushMatrix();					//Roof
		glColor3f(0.4, 0.4, 0.4);
		glTranslatef(-0.8, 1.0, 0);
		fullPyramid(0.5);
	glPopMatrix();
}

void LondonBridge::pillar() {
	glPushMatrix();
		glColor4f(0.45, 0.45, 0.45, 1);
		glRotatef(-90, 1, 0, 0);
		glPushMatrix();				//2 pillars (front)
			glTranslatef(-0.3, 0, 0);
			fullCylinder(0.05, 0.05, 1.0);
			glTranslatef(-0.5, 0, 0);
			fullCylinder(0.05, 0.05, 1.0);
		glPopMatrix();

		glPushMatrix();				//2 pillars (back)
			glTranslatef(-0.3, -0.5, 0);
			fullCylinder(0.05, 0.05, 1.0);
			glTranslatef(-0.5, 0, 0);
			fullCylinder(0.05, 0.05, 1.0);
		glPopMatrix();
	glPopMatrix();
}

void LondonBridge::wires() {
	glPushMatrix();
		glColor3f(0.1, 0.1, 0.1);
		glRotatef(-90, 1, 0, 0);
		glTranslatef(0.3, 0, 0.2);
		glRotatef(-40, 0, 1, 0);
		fullCylinder(0.025, 0.025, 0.9);
	glPopMatrix();
}

void LondonBridge::londonBridge() {
	
	/*First tower*/
	glPushMatrix();
		tower();
		roof();
		pillar();
	glPopMatrix();
	/*------------*/

	/*Second Tower*/
	glPushMatrix();
		glTranslatef(2, 0, 0);
		tower();
		roof();
		pillar();
	glPopMatrix();
	/*------------*/

	/*Wires*/
	glPushMatrix();
		wires();
		glPushMatrix();
			glTranslatef(0, 0, 0.5);
			wires();
		glPopMatrix();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(2, 0, 0);
		wires();
		glPushMatrix();
			glTranslatef(0, 0, 0.5);
			wires();
		glPopMatrix();
	glPopMatrix();

	glPushMatrix();
		glRotatef(-180, 1, 0, 0);
		glTranslatef(0.9, -1.1, -0.5);
		wires();
		glPushMatrix();
			glTranslatef(0, 0, 0.5);
			wires();
		glPopMatrix();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-2, 0, 0);
		glRotatef(-180, 1, 0, 0);
		glTranslatef(0.9, -1.1, -0.5);
		wires();
		glPushMatrix();
			glTranslatef(0, 0, 0.5);
			wires();
		glPopMatrix();
	glPopMatrix();
	/*------*/

	/*Road*/
	glPushMatrix();					
		glColor3f(0.2, 0.2, 0.2);
		glScalef(10.0, 0.05, 0.5);
		glTranslatef(-0.5, 3.0, 0);
		cube(1.0);
	glPopMatrix();
	/*-----*/
}

