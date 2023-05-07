#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "Head.h"

void Head::gundamHead() {
	glPushMatrix();
		
		/* Head */
		glPushMatrix(); 
			glPushMatrix();
				glColor3f(1, 1, 1);
				glTranslatef(0, 0, -0.1);
				fullSphere(0.4);
			glPopMatrix();
			glPushMatrix();
				glColor3f(0.6, 0.6, 0.6);
				glScalef(1.25, 1.25, 1.25);
				glTranslatef(-0.25, -0.25, -0.25);
				cube(0.5);
			glPopMatrix();
		glPopMatrix();
		/* ------ */

		/* Mouth Thing */
		glPushMatrix();
		glTranslatef(0, 0, 0.05);
			glPushMatrix();
				glColor3f(0.55, 0.55, 0.55);
				glScalef(0.5, 1, 1);
				glTranslatef(-0.15, -0.3, 0.2);
				cube(0.3);
			glPopMatrix();

			glPushMatrix();
				glColor3f(0.4, 0.4, 0.4);
				glTranslatef(-0.25, 0, 0.3);
				glPushMatrix();
					glRotatef(45, 0, 1, 0);	
					glTranslatef(0.1, -0.3, 0.3);
					glScalef(1, 1, 0.25);
					cube(0.3);
				glPopMatrix();
			glPopMatrix();
			glPushMatrix();
				glTranslatef(-0.1, 0, -0.05);
				glPushMatrix();
					glRotatef(-45, 0, 1, 0);
					glTranslatef(0.1, -0.3, 0.3);
					glScalef(1, 1, 0.25);
					cube(0.3);
				glPopMatrix();
			glPopMatrix();
		glPopMatrix();
		/* ----------- */

		/* Eyes */
		glPushMatrix();
			glColor3f(1, 1, 0);
			glScalef(1.0, 0.5, 0.2);
			glTranslatef(0, 0, 0.9);
			cube(0.1);
		glPopMatrix();

	glPopMatrix();
}
