#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "legs.h"

void Legs::gundamLegs() {
	
	//feet
	glPushMatrix();
		glScalef(5.0, 5.0, 5.0); 
		glRotatef(90, -1, 0, 0);
		glBegin(GL_QUADS);
		glColor3f(0.2, 0.2, 1.0);
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
		glColor3f(0.2, 0.2, 1.0);
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
		glColor3f(0.2, 0.2, 1.0);
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
	glPopMatrix();

}

void Legs::gundamLowerLeg() {
	glPushMatrix();
		glScalef(1.2, 4.0, 1.0);
		glTranslatef(0, 0.03, 0.77);
		glColor3f(0, 0, 0);
		lineCube(0.21);
		glColor3f(1.0, 0.2, 0.3);
		cube(0.21);
	glPopMatrix();
	// Knee pad
	glPushMatrix();
		glScalef(0.22, 1.8, 1.0);
		glTranslatef(1.2, 0.55, 0.745);
		glColor3f(0, 0, 0);
		lineCube(0.28);
		glColor3f(0.2, 0.2, 1.0);
		cube(0.28);
	glPopMatrix();
	//Knee bone
	glPushMatrix();
		glScalef(1.2, 0.5, 1.0);
		glTranslatef(-0.025, 2, 0.745);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 1.0);
		cube(0.25);
	glPopMatrix();
	//Knee Bone
	glPushMatrix();
		glScalef(1.2, 2.5, 1.0);
		glTranslatef(0, 0.35, 0.77);
		glColor3f(0, 0, 0);
		lineCube(0.21);
		glColor3f(0.55, 0.56, 0.55);
		cube(0.21);
	glPopMatrix();
	//Knee Joint
	glPushMatrix();
		glScalef(1.0, 1.0, 1.0);
		glTranslatef(0.15, 1.3, 0.685);
		glColor3f(1.0, 1.0, 1.0);
		fullCylinder(0.1, 0.1, 0.4);
		fulldisk(0, 0.1);
		glTranslatef(0, 0, 0.4);
		fulldisk(0, 0.1);
	glPopMatrix();
}

void Legs::gundamThigh() {
	glPushMatrix();
		glScalef(1.2, 3.5, 1.2);
		glTranslatef(0, 0.35, 0.625);
		glColor3f(0, 0, 0);
		lineCube(0.21);
		glColor3f(1.0, 0.2, 0.2);
		cube(0.21);
	glPopMatrix();
	glPushMatrix();
		//glScalef(1.2, 3.5, 1.2);
		//glTranslatef(0, 0.35, 0.625);
		//glColor3f(0, 0, 0);
		//lineCube(0.18);
		//glColor3f(0.2, 0.2, 1.0);
		//cube(0.18);
	glPopMatrix();
}

void Legs::legAddons() {
	//AnkleGuard
	glPushMatrix();
		glScalef(1.2, 1, 1.0);
		glTranslatef(-0.025, 0.4, 0.745);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.8, 0.8, 1.0);
		cube(0.25);
	glPopMatrix();
	//Ankle Joint
	glPushMatrix();
		glScalef(1.0, 1.0, 1.0);
		glTranslatef(0.15, 0.5, 0.685);
		glColor3f(1.0, 1.0, 1.0);
		fullCylinder(0.1, 0.1, 0.4);
		fulldisk(0, 0.1);
		glTranslatef(0, 0, 0.4);
		fulldisk(0, 0.1);
	glPopMatrix();
		//Bottom of feet
		glScalef(2.2, 0.25, 1.0);
		glTranslatef(-0.025, 0, 0.745);
		glColor3f(0, 0, 0);
		lineCube(0.25);
		glColor3f(0.82, 0.39, 0.09);
		cube(0.25);
	glPushMatrix();
	
	glEnd();
}

void Legs::mergeLegs() {
	gundamLegs();
	gundamLowerLeg();
	gundamThigh();
	legAddons();
	cock();
}