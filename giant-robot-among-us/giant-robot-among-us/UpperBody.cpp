#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "UpperBody.h"

void UpperBody::finger() {
	glPushMatrix();
		glPushMatrix();
			glRotatef(30, 0, 0, 1);
			glColor3f(0.25, 0.25, 0.25);
			glScalef(1.2, 1, 1);
			glTranslatef(-0.05, 0.2, 0);
			cube(0.2);
		glPopMatrix();

		glPushMatrix();
			glRotatef(90, 0, 0, 1);
			glScalef(1, 1, 0.75);
			glTranslatef(0, 0, 0.05);
			cube(0.2);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-0.1, -0.1, 0.05);
			glScalef(2, 1, 1);
			cube(0.15);
		glPopMatrix();
	glPopMatrix();
}

void UpperBody::hand() {
	/* Palm */
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(1.25, 0.5, 1.25);
		glTranslatef(0, 0.5, -0.01);
		cube(0.5);
	glPopMatrix();
	/* ------- */

	/* Thumb */
	glPushMatrix();
		glPushMatrix();
			glColor3f(0.3, 0.3, 0.3);
			glTranslatef(0.2, 0.1, -0.2);
			cube(0.2);	
		glPopMatrix();

		glPushMatrix();
			glScalef(0.75, 0.75, 1.5);
			glRotatef(30, 1, 0, 0);
			glTranslatef(0.3, -0.1, -0.1);
			cube(0.2);
		glPopMatrix();

	glPopMatrix();

	/* Index Finger */
	glPushMatrix();
		finger();
	glPopMatrix();

	/* Middle Finger */
	glPushMatrix();
		glTranslatef(0, 0, 0.2);
		finger();
	glPopMatrix();

	/* Third Finger */
	glPushMatrix();
		glTranslatef(0, 0, 0.4);
		finger();
	glPopMatrix();

}