#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "UpperBody.h"

void UpperBody::hand() {
	glPushMatrix();
	glScalef()
	cube(0.5);
	glPopMatrix();
}