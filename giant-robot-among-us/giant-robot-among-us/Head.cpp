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
			/*glPushMatrix();
				glColor3f(1, 1, 1);
				glTranslatef(0, 0, -0.1);
				fullSphere(0.4);
			glPopMatrix();*/
			glPushMatrix();
				glColor3f(0.65, 0.65, 0.65);
				glScalef(1.25, 1.25, 1.25);
				glTranslatef(-0.25, -0.25, -0.25);
				cube(0.5);
			glPopMatrix();
		glPopMatrix();
		/* ------ */

		/* Mouth Thing */
		glPushMatrix();
			glColor3f(0.8, 0, 0);
			glScalef(0.5, 0.5, 1);
			glTranslatef(-0.1, -0.5, 0.32);
			cube(0.2);
		glPopMatrix();
		
		glPushMatrix();
			glRotatef(-45, 1, 0, 0);
			glPushMatrix();
				glColor3f(0.55, 0.55, 0.55);
				glScalef(0.5, 0.5, 0.5);
				glTranslatef(-0.15, -0.7, 0.38);
				cube(0.3);
			glPopMatrix();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0, 0, 0.05);
			glScalef(0.9, 0.9, 0.9);
			glPushMatrix();			//Center piece
				glColor3f(0.55, 0.55, 0.55);
				glScalef(0.5, 1, 1);
				glTranslatef(-0.15, -0.3, 0.2);
				cube(0.3);
			glPopMatrix();

			glPushMatrix();			//Side pieces
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
		glPushMatrix();			//Right Eye
			glColor3f(1, 1, 0);
			glScalef(1.5, 1.0, 0.2);
			glTranslatef(0.05, 0, 1.55);
			cube(0.1);
		glPopMatrix();
		glPushMatrix();			//Left Eye
			glColor3f(1, 1, 0);
			glScalef(1.5, 1.0, 0.2);
			glTranslatef(-0.15, 0, 1.55);
			cube(0.1);
		glPopMatrix();
		/* ------ */

		/* Decor */
		glPushMatrix();			//The left one
			glRotatef(20, 0, 1, 0);
			glPushMatrix();
				glColor3f(0.3, 0.3, 0.3);
				glScalef(0.2, 1, 0.75);
				glTranslatef(-2.25, -0.3, -0.2);
				cube(0.5);
			glPopMatrix();
			glPushMatrix();
				glColor3f(0.3, 0.3, 0.3);
				glScalef(0.2, 1, 0.75);
				glTranslatef(1.75, -0.3, -0.3);
				cube(0.5);
			glPopMatrix();
		glPopMatrix();

		glPushMatrix();			//The right one
			glRotatef(-20, 0, 1, 0);
			glPushMatrix();
				glColor3f(0.3, 0.3, 0.3);
				glScalef(0.2, 1, 0.75);
				glTranslatef(1.75, -0.3, -0.2);
				cube(0.5);
			glPopMatrix();
			glPushMatrix();
				glColor3f(0.3, 0.3, 0.3);
				glScalef(0.2, 1, 0.75);
				glTranslatef(-2.25, -0.3, -0.3);
				cube(0.5);
			glPopMatrix();
		glPopMatrix();

		glPushMatrix();			//The center one
		
			glPushMatrix();
				glScalef(0.5, 1, 0.75);
				glTranslatef(-0.1, 0.1, 0.3);
				cube(0.2);
			glPopMatrix();
		glPopMatrix();
		/* ------*/


	glPopMatrix();
}
