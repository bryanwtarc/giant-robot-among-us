#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "UpperBody.h"

void UpperBody::hand() {
	/* Palm */
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(1, 0.5, 1);
		glTranslatef(0, 0.5, 0);
		cube(0.5);
	glPopMatrix();
	/* ------- */

	/* Index Finger */
	glPushMatrix();
		glColor3f(0.25, 0.25, 0.25);
		glScalef(1.2, 1, 1);
		glTranslatef(-0.2, 0.3, 0);
		cube(0.2);

	glPopMatrix();
}