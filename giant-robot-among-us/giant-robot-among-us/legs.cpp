#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "legs.h"

void Legs::gundamLegs() {
	Draw draw;
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	
	//feet
	glPushMatrix();
	glScalef(10.0, 10.0, 10.0);
	glPushMatrix();
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
	
	glPopMatrix();
	glPopMatrix();


	
	glPushMatrix();

	glPopMatrix();
}