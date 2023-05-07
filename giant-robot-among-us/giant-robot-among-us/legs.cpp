#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "DrawFunctions.h"
#include "legs.h"

void Legs::gundamFeet() {
	
	//feet
	glPushMatrix();
	glPushMatrix();
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
	glPopMatrix();
	//Calf and knees
	glPushMatrix();
	glColor3f(1.0, 0, 0);
	glTranslatef(0.2, 0, 0.0);
	glRotatef(90, 1, 0, 0);
	fullCylinder(0.1, 0.1, 0.6);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.2, 0.05, 0);
	glColor3f(0, 1, 0);
	fullCylinder(0.1, 0.1, 0.07);
	glColor3f(0, 0, 1);
	fullSphere(0.1);
	glPopMatrix();
	glPopMatrix();
}

void Legs::gundamRThigh() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	//face 1
	glVertex3f(0.05, -0.19, 0.24); //E
	glVertex3f(0, -0.19, 0.24);  //G
	glVertex3f(0, -0.16, 0.24); //H
	glVertex3f(0.05, -0.16, 0.24); //F
	//face 2
	glVertex3f(0.05, -0.16, 0.24); //F
	glVertex3f(0.075, -0.125, 0.3); //P
	glVertex3f(0.075, -0.19, 0.3); //O
	glVertex3f(0.05, -0.19, 0.24); //E
	//face 3
	glVertex3f(0.05, -0.19, 0.24); //E
	glVertex3f(0, -0.19, 0.24); //G
	glVertex3f(0, -0.19, 0.35); //J
	glVertex3f(0.075, -0.19, 0.35); //L
	glVertex3f(0.075, -0.19, 0.3); //O
	//face 4
	glVertex3f(0.075, -0.19, 0.3); //O
	glVertex3f(0.075, -0.125, 0.3); //P
	glVertex3f(0.075, -0.125, 0.35); //K
	glVertex3f(0.075, -0.19, 0.35);//L
	//face 5
	glVertex3f(0.075, -0.19, 0.35);//L
	glVertex3f(0, -0.19, 0.35);//J
	glVertex3f(0, -0.125, 0.35);//I
	glVertex3f(0.075, -0.125, 0.35);//K
	//face 6
	glVertex3f(0.075, -0.125, 0.35);//K
	glVertex3f(0.075, -0.125, 0.3);//P
	glVertex3f(0, -0.16, 0.24);//N
	glVertex3f(0, -0.125, 0.35);//I
	//face 7
	glVertex3f(0, -0.125, 0.35);//I
	glVertex3f(0, -0.19, 0.35);//J
	glVertex3f(0, -0.19, 0.24);//G
	glVertex3f(0, -0.16, 0.24);//H
	glVertex3f(0, -0.16, 0.24);//N
	//face 8
	glVertex3f(0, -0.16, 0.24);//N
	glVertex3f(0.075, -0.125, 0.3);//P
	glVertex3f(0.05, -0.16, 0.24);//F
	glVertex3f(0, -0.16, 0.24);//H
	glEnd();

	glBegin(GL_LINES);
	glLineWidth(10.0);
	glColor3f(0, 0, 0);
	//face 1
	glVertex3f(0.05, -0.19, 0.24); //E
	glVertex3f(0, -0.19, 0.24);  //G
	glVertex3f(0, -0.16, 0.24); //H
	glVertex3f(0.05, -0.16, 0.24); //F
	//face 2
	glVertex3f(0.05, -0.16, 0.24); //F
	glVertex3f(0.075, -0.125, 0.3); //P
	glVertex3f(0.075, -0.19, 0.3); //O
	glVertex3f(0.05, -0.19, 0.24); //E
	//face 3
	glVertex3f(0.05, -0.19, 0.24); //E
	glVertex3f(0, -0.19, 0.24); //G
	glVertex3f(0, -0.19, 0.35); //J
	glVertex3f(0.075, -0.19, 0.35); //L
	glVertex3f(0.075, -0.19, 0.3); //O
	//face 4
	glVertex3f(0.075, -0.19, 0.3); //O
	glVertex3f(0.075, -0.125, 0.3); //P
	glVertex3f(0.075, -0.125, 0.35); //K
	glVertex3f(0.075, -0.19, 0.35);//L
	//face 5
	glVertex3f(0.075, -0.19, 0.35);//L
	glVertex3f(0, -0.19, 0.35);//J
	glVertex3f(0, -0.125, 0.35);//I
	glVertex3f(0.075, -0.125, 0.35);//K
	//face 6
	glVertex3f(0.075, -0.125, 0.35);//K
	glVertex3f(0.075, -0.125, 0.3);//P
	glVertex3f(0, -0.16, 0.24);//N
	glVertex3f(0, -0.125, 0.35);//I
	//face 7
	glVertex3f(0, -0.125, 0.35);//I
	glVertex3f(0, -0.19, 0.35);//J
	glVertex3f(0, -0.19, 0.24);//G
	glVertex3f(0, -0.16, 0.24);//H
	glVertex3f(0, -0.16, 0.24);//N
	//face 8
	glVertex3f(0, -0.16, 0.24);//N
	glVertex3f(0.075, -0.125, 0.3);//P
	glVertex3f(0.05, -0.16, 0.24);//F
	glVertex3f(0, -0.16, 0.24);//H
	glEnd();
	glPopMatrix();

}

void Legs::gundamLThigh() {
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	//face 1
	glVertex3f(0.05, 0.03, 0.24); //E
	glVertex3f(0, 0.03, 0.24);  //G
	glVertex3f(0, 0, 0.24); //H
	glVertex3f(0.05, 0, 0.24); //F
	//face 2
	glVertex3f(0.05, 0, 0.24); //F
	glVertex3f(0.075, -0.0285, 0.3); //P
	glVertex3f(0.075, 0.03, 0.3); //O
	glVertex3f(0.05, 0.03, 0.24); //E
	//face 3
	glVertex3f(0.05, 0.03, 0.24); //E
	glVertex3f(0, 0.03, 0.24); //G
	glVertex3f(0, 0.03, 0.35); //J
	glVertex3f(0.075, 0.03, 0.35); //L
	glVertex3f(0.075, 0.03, 0.3); //O
	//face 4
	glVertex3f(0.075, 0.03, 0.3); //O
	glVertex3f(0.075, -0.0285, 0.3); //P
	glVertex3f(0.075, -0.0285, 0.35); //K
	glVertex3f(0.075, 0.03, 0.35);//L
	//face 5
	glVertex3f(0.075, 0.03, 0.35);//L
	glVertex3f(0, 0.03, 0.35);//J
	glVertex3f(0, -0.0285, 0.35);//I
	glVertex3f(0.075, -0.0285, 0.35);//K
	//face 6
	glVertex3f(0.075, -0.0285, 0.35);//K
	glVertex3f(0.075, -0.0285, 0.3);//P
	glVertex3f(0, -0.0285, 0.3);//N
	glVertex3f(0, -0.0285, 0.35);//I
	//face 7
	glVertex3f(0, -0.0285, 0.35);//I
	glVertex3f(0, 0.03, 0.35);//J
	glVertex3f(0, 0.03, 0.24);//G
	glVertex3f(0, 0, 0.24);//H
	glVertex3f(0, -0.0285, 0.3);//N
	//face 8
	glVertex3f(0, -0.0285, 0.3);//N
	glVertex3f(0.075, -0.0285, 0.3);//P
	glVertex3f(0.05, 0, 0.24);//F
	glVertex3f(0, 0, 0.24);//H
	glEnd();

	glBegin(GL_LINES);
	glLineWidth(10);
	glColor3f(0, 0, 0);
	//face 1
	glVertex3f(0.05, 0.03, 0.24); //E
	glVertex3f(0, 0.03, 0.24);  //G
	glVertex3f(0, 0, 0.24); //H
	glVertex3f(0.05, 0, 0.24); //F
	//face 2
	glVertex3f(0.05, 0, 0.24); //F
	glVertex3f(0.075, -0.0285, 0.3); //P
	glVertex3f(0.075, 0.03, 0.3); //O
	glVertex3f(0.05, 0.03, 0.24); //E
	//face 3
	glVertex3f(0.05, 0.03, 0.24); //E
	glVertex3f(0, 0.03, 0.24); //G
	glVertex3f(0, 0.03, 0.35); //J
	glVertex3f(0.075, 0.03, 0.35); //L
	glVertex3f(0.075, 0.03, 0.3); //O
	//face 4
	glVertex3f(0.075, 0.03, 0.3); //O
	glVertex3f(0.075, -0.0285, 0.3); //P
	glVertex3f(0.075, -0.0285, 0.35); //K
	glVertex3f(0.075, 0.03, 0.35);//L
	//face 5
	glVertex3f(0.075, 0.03, 0.35);//L
	glVertex3f(0, 0.03, 0.35);//J
	glVertex3f(0, -0.0285, 0.35);//I
	glVertex3f(0.075, -0.0285, 0.35);//K
	//face 6
	glVertex3f(0.075, -0.0285, 0.35);//K
	glVertex3f(0.075, -0.0285, 0.3);//P
	glVertex3f(0, -0.0285, 0.3);//N
	glVertex3f(0, -0.0285, 0.35);//I
	//face 7
	glVertex3f(0, -0.0285, 0.35);//I
	glVertex3f(0, 0.03, 0.35);//J
	glVertex3f(0, 0.03, 0.24);//G
	glVertex3f(0, 0, 0.24);//H
	glVertex3f(0, -0.0285, 0.3);//N
	//face 8
	glVertex3f(0, -0.0285, 0.3);//N
	glVertex3f(0.075, -0.0285, 0.3);//P
	glVertex3f(0.05, 0, 0.24);//F
	glVertex3f(0, 0, 0.24);//H
	glEnd();
	glPopMatrix();
}

void Legs::gundamCrotchPlate() {

}