#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "LondonBridge.h"

	
void LondonBridge::londonBridge() {
	
	/*First tower*/
	glPushMatrix();
		glColor3f(1, 0, 0);
		glTranslatef(-0.8, 0, 0);
		cube(0.5);
		glTranslatef(0, 0.5, 0);
		cube(0.5);
	glPopMatrix();
	glPushMatrix();
		glColor3f(0, 0, 1);
		glRotatef(-90, 1, 0, 0);
		glTranslatef(-0.3, 0, 0);
		cylinder(0.05, 0.05, 1.0);
	glPopMatrix();
	/*------------*/

	/*Second Tower*/
	glPushMatrix();
		glColor3f(1, 0, 0);
		glTranslatef(0.8, 0, 0);
		cube(0.5);
		glTranslatef(0, 0.5, 0);
		cube(0.5);
	glPopMatrix();
	/*------------*/

	
}

