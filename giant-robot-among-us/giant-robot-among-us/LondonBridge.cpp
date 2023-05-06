#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "LondonBridge.h"

	
void LondonBridge::londonBridge() {
	glColor3f(1, 0, 0);
	glPushMatrix();
		glTranslatef(-0.5, 0, 0);
		cube(0.5);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.5, 0, 0);
		cube(0.5);
	glPopMatrix();
}

