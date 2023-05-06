#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "LondonBridge.h"

	
void LondonBridge::londonBridge() {
	
	/*First tower*/
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
	glPushMatrix();					//Tower
		glColor4f(0.78, 0.78, 0.78, 1);
		glScalef(1.0, 2.0, 1.0);
		glTranslatef(-0.8, 0, 0);
		cube(0.5);
	glPopMatrix();
	glPushMatrix();					//Roof
		glColor3f(0.4, 0.4, 0.4);
		glTranslatef(-0.8, 1.0, 0);
		fullPyramid(0.5);
	glPopMatrix();
	
	
	/*------------*/

	/*Second Tower*/
	glPushMatrix();
		glTranslatef(2, 0, 0);
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
		glPushMatrix();					//Tower
			glColor4f(0.78, 0.78, 0.78, 1);
			glScalef(1.0, 2.0, 1.0);
			glTranslatef(-0.8, 0, 0);
			cube(0.5);
		glPopMatrix();
		glPushMatrix();					//Roof
			glColor3f(0.4, 0.4, 0.4);
			glTranslatef(-0.8, 1.0, 0);
			fullPyramid(0.5);
		glPopMatrix();
	glPopMatrix();
	/*------------*/

	glPushMatrix();					//Road
		glColor3f(0.2, 0.2, 0.2);
		glScalef(10.0, 0.05, 0.5);
		glTranslatef(-0.5, 2.0, 0);
		cube(1.0);
	glPopMatrix();
	
}

