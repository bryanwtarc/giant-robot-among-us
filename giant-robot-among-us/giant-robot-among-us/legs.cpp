#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "legs.h"

void Legs::gundamLegs() {
	
	//feet
	glScalef(5.0, 5.0, 5.0);
	glRotatef(90, -0.9, 0, 0);
	glTranslatef(0, 0.2, 0);
		glBegin(GL_QUADS);
		glColor3f(1.0, 0.5, 0);
		//face 1
		glVertex3f(0.1, -0.15, 0);
		glVertex3f(0.1, -0.2, 0);
		glVertex3f(0.05, -0.2, 0);
		glVertex3f(0.05, -0.15, 0);
		//face 2
		glVertex3f(0.05, -0.15, 0);
		glVertex3f(0.1, -0.15, 0);
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0.05, -0.15, 0.025);
		//face 3
		glVertex3f(0.05, -0.15, 0.025);
		glVertex3f(0.05, -0.2, 0.025);
		glVertex3f(0.1, -0.2, 0.025);
		glVertex3f(0.1, -0.15, 0.025);
		//face 4
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0.1, -0.15, 0);
		glVertex3f(0.05, -0.15, 0);
		glVertex3f(0.05, -0.15, 0.025);
		//face 5
		glVertex3f(0.05, -0.15, 0.025);
		glVertex3f(0.05, -0.15, 0);
		glVertex3f(0.05, -0.2, 0);
		glVertex3f(0.05, -0.2, 0.025);
		//face 6
		glVertex3f(0.05, -0.2, 0.025);
		glVertex3f(0.1, -0.2, 0.025);
		glVertex3f(0.1, -0.2, 0);
		glVertex3f(0.05, -0.2, 0);
		glEnd();
		
		//SOLE OF FEET
		glBegin(GL_QUADS);
		glColor3f(1.0, 0.5, 0.5);
		//face 1
		glVertex3f(0.025,  -0.2, 0.025);
		glVertex3f(0.025,  -0.15, 0.025);
		glVertex3f(0.025, -0.15, 0);
		glVertex3f(0.025, -0.2, 0);
		//face 2
		glVertex3f(0.025, -0.2, 0);
		glVertex3f(0, -0.2, 0);
		glVertex3f(0, -0.2, 0.025);
		glVertex3f(0.025, -0.2, 0.025);
		//face 3
		glVertex3f(0.025, -0.2, 0.025);
		glVertex3f(0.025, -0.15, 0.025);
		glVertex3f(0, -0.15, 0.025);
		glVertex3f(0, -0.2, 0.025);
		//face 4
		glVertex3f(0, -0.2, 0.025);
		glVertex3f(0, -0.2, 0);
		glVertex3f(0, -0.15, 0);
		glVertex3f(0, -0.15, 0.025);
		//face 5
		glVertex3f(0, -0.15, 0.025);
		glVertex3f(0.025, -0.15, 0.025);
		glVertex3f(0.025, -0.15, 0);
		glVertex3f(0, -0.15, 0);
		//face 6
		glVertex3f(0, -0.15, 0);
		glVertex3f(0, -0.2, 0);
		glVertex3f(0.025, -0.2, 0);
		glVertex3f(0.025, -0.15, 0);
		glEnd();

		//Face of feet
		glBegin(GL_QUADS);
		glColor3f(0, 1.0, 0.5);
		//face 1
		glVertex3f(0.1, -0.2, 0.025);
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0, -0.15, 0.025);
		glVertex3f(0, -0.2, 0.025);
		//face 2
		glVertex3f(0, -0.2, 0.025);
		glVertex3f(0.025, -0.2, 0.06);
		glVertex3f(0.025, -0.15, 0.06);
		glVertex3f(0, -0.15, 0.025);
		//face 3
		glVertex3f(0, -0.15, 0.025);
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0.05, -0.15, 0.06);
		glVertex3f(0.025, -0.15, 0.06);
		//face 4
		glVertex3f(0.025, -0.15, 0.06);
		glVertex3f(0.025, -0.2, 0.06);
		glVertex3f(0.05, -0.2, 0.06);
		glVertex3f(0.05, -0.15, 0.06);
		//face 5
		glVertex3f(0.05, -0.15, 0.06);
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0.1, -0.2, 0.025);
		glVertex3f(0.05, -0.2, 0.06);
		//face 6
		glVertex3f(0.05, -0.2, 0.06);
		glVertex3f(0.025, -0.2, 0.06);
		glVertex3f(0, -0.2, 0.025);
		glVertex3f(0.1, -0.2, 0.025);
		glEnd();
		
		//Line tracing
		glBegin(GL_LINES);
		glLineWidth(5.0);
		glColor3f(0, 0, 0);
		//face 1
		glVertex3f(0.1, -0.2, 0.025);
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0, -0.15, 0.025);
		glVertex3f(0, -0.2, 0.025);
		//face 2
		glVertex3f(0, -0.2, 0.025);
		glVertex3f(0.025, -0.2, 0.06);
		glVertex3f(0.025, -0.15, 0.06);
		glVertex3f(0, -0.15, 0.025);
		//face 3
		glVertex3f(0, -0.15, 0.025);
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0.05, -0.15, 0.06);
		glVertex3f(0.025, -0.15, 0.06);
		//face 4
		glVertex3f(0.025, -0.15, 0.06);
		glVertex3f(0.025, -0.2, 0.06);
		glVertex3f(0.05, -0.2, 0.06);
		glVertex3f(0.05, -0.15, 0.06);
		//face 5
		glVertex3f(0.05, -0.15, 0.06);
		glVertex3f(0.1, -0.15, 0.025);
		glVertex3f(0.1, -0.2, 0.025);
		glVertex3f(0.05, -0.2, 0.06);
		//face 6
		glVertex3f(0.05, -0.2, 0.06);
		glVertex3f(0.025, -0.2, 0.06);
		glVertex3f(0, -0.2, 0.025);
		glVertex3f(0.1, -0.2, 0.025);
		glEnd();
		glPushMatrix();
		glPopMatrix();
}

void Legs::gundamCrotchPlate() {

}