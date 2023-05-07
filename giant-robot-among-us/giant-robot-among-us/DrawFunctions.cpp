#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"

void Draw::quad(float size) {
	glBegin(GL_QUADS);
		glVertex3f(size, size, size);
		glVertex3f(size, size, size);
		glVertex3f(size, size, size);
		glVertex3f(size, size, size);
	glEnd();
}

void Draw::cube(float size) {
	glBegin(GL_QUADS);

	//Face 1: bottom (front)
	glVertex3f(0.0, 0.0, size);
	glVertex3f(size, 0.0, size);
	glVertex3f(size, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);

	//Face 2: left
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, size, 0.0);
	glVertex3f(0.0, size, size);
	glVertex3f(0.0, 0.0, size);

	//Face 3: front (top)
	glVertex3f(0.0, 0.0, size);
	glVertex3f(0.0, size, size);
	glVertex3f(size, size, size);
	glVertex3f(size, 0.0, size);

	//Face 4: right
	glVertex3f(size, 0.0, size);
	glVertex3f(size, size, size);
	glVertex3f(size, size, 0.0);
	glVertex3f(size, 0.0, 0.0);

	//Face 5:  bottom
	glVertex3f(size, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, size, 0.0);
	glVertex3f(size, size, 0.0);

	//Face 6: back
	glVertex3f(size, size, 0.0);
	glVertex3f(0.0, size, 0.0);
	glVertex3f(0.0, size, size);
	glVertex3f(size, size, size);
	glEnd();
}

void Draw::lineCube(float size) {
	glBegin(GL_LINE_STRIP);

	//Face 1: bottom (front)
	glVertex3f(0.0, 0.0, size);
	glVertex3f(size, 0.0, size);
	glVertex3f(size, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);

	//Face 2: left
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, size, 0.0);
	glVertex3f(0.0, size, size);
	glVertex3f(0.0, 0.0, size);

	//Face 3: front (top)
	glVertex3f(0.0, 0.0, size);
	glVertex3f(0.0, size, size);
	glVertex3f(size, size, size);
	glVertex3f(size, 0.0, size);

	//Face 4: right
	glVertex3f(size, 0.0, size);
	glVertex3f(size, size, size);
	glVertex3f(size, size, 0.0);
	glVertex3f(size, 0.0, 0.0);

	//Face 5:  bottom
	glVertex3f(size, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, size, 0.0);
	glVertex3f(size, size, 0.0);

	//Face 6: back
	glVertex3f(size, size, 0.0);
	glVertex3f(0.0, size, 0.0);
	glVertex3f(0.0, size, size);
	glVertex3f(size, size, size);
	glEnd();
}

void Draw::fullSphere(float r) {
		GLUquadricObj* sphere = NULL;
		sphere = gluNewQuadric();
		gluQuadricDrawStyle(sphere, GLU_FILL);
		gluQuadricTexture(sphere, true);			//For Texturing
		gluSphere(sphere, r, 30, 30);
		gluDeleteQuadric(sphere);
}

void Draw::lineSphere(float r) {
	GLUquadricObj* sphere = NULL;
	sphere = gluNewQuadric();
	gluQuadricDrawStyle(sphere, GLU_FILL);
	gluQuadricTexture(sphere, true);			//For Texturing
	gluSphere(sphere, r, 30, 30);
	gluDeleteQuadric(sphere);
}

void Draw::lineCylinder(float br, float tr, float h) {
		GLUquadricObj* cylinder = NULL; // create a quadric obj pointer
		cylinder = gluNewQuadric();		// create a quadric obj
		gluQuadricDrawStyle(cylinder, GLU_LINE);		// SET THE DRAW STYLE 

		gluCylinder(cylinder, br, tr, h, 30, 30);		// gluCylinder (base radius, top radius, height, slice, stack)

		gluDeleteQuadric(cylinder);			// delete the quadric obj
}

void Draw::fullCylinder(float br, float tr, float h) {
	GLUquadricObj* cylinder = NULL; // create a quadric obj pointer
	cylinder = gluNewQuadric();		// create a quadric obj
	gluQuadricDrawStyle(cylinder, GLU_FILL);		// SET THE DRAW STYLE 

	gluCylinder(cylinder, br, tr, h, 30, 30);		// gluCylinder (base radius, top radius, height, slice, stack)

	gluDeleteQuadric(cylinder);			// delete the quadric obj
}

void Draw::lineCone(float tr, float h) {
		GLUquadricObj* cylinder = NULL; // create a quadric obj pointer
		cylinder = gluNewQuadric();		// create a quadric obj
		gluQuadricDrawStyle(cylinder, GLU_LINE);		// SET THE DRAW STYLE 

		gluCylinder(cylinder, 0, tr, h, 30, 30);		// gluCylinder (base radius, top radius, height, slice, stack)

		gluDeleteQuadric(cylinder);			// delete the quadric obj
	}

void Draw::fullCone(float tr, float h) {
	GLUquadricObj* cylinder = NULL; // create a quadric obj pointer
	cylinder = gluNewQuadric();		// create a quadric obj
	gluQuadricDrawStyle(cylinder, GLU_FILL);		// SET THE DRAW STYLE 

	gluCylinder(cylinder, 0, tr, h, 30, 30);		// gluCylinder (base radius, top radius, height, slice, stack)

	gluDeleteQuadric(cylinder);			// delete the quadric obj
}

void Draw::sphereWithoutGLU() {
		const float PI = 3.141592f;
		GLfloat x, y, z, sliceA, stackA;
		GLfloat radius = 0.5;
		int sliceNo = 30, stackNo = 30;

		for (sliceA = 0.0; sliceA < 2 * PI; sliceA += PI / sliceNo)		// remove PI to make semi circle
		{
			glBegin(GL_LINE_STRIP);
			glBegin(GL_POLYGON);
			for (stackA = 0.0; stackA < 2 * PI; stackA += PI / stackNo)
			{
				x = radius * cos(stackA) * sin(sliceA);
				y = radius * sin(stackA) * sin(sliceA);
				z = radius * cos(sliceA);
				glVertex3f(x, y, z);
				x = radius * cos(stackA) * sin(sliceA + PI / stackNo);
				y = radius * sin(stackA) * sin(sliceA + PI / sliceNo);
				z = radius * cos(sliceA + PI / sliceNo);
				glVertex3f(x, y, z);
			}
			glEnd();
		}
	}

void Draw::linePyramid(float size) {

		glBegin(GL_LINE_LOOP);
		glLineWidth(1.5);

		//Base
		glVertex3f(0.0, 0.0, size);
		glVertex3f(size, 0.0, size);
		glVertex3f(size, 0.0, 0.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(size / 2, size, size / 2);
		glVertex3f(0.0, 0.0, size);
		glVertex3f(size / 2, size, size / 2);
		glVertex3f(size, 0.0, size);
		glVertex3f(size / 2, size, size / 2);
		glVertex3f(size, 0.0, 0.0);
		glVertex3f(size / 2, size, size / 2);
		glVertex3f(0.0, 0.0, 0.0);

		glEnd();
	}

void Draw::fullPyramid(float size) {

	glBegin(GL_POLYGON);
	glLineWidth(1.5);

	//Base
	glVertex3f(0.0, 0.0, size);
	glVertex3f(size, 0.0, size);
	glVertex3f(size, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(size / 2, size, size / 2);
	glVertex3f(0.0, 0.0, size);
	glVertex3f(size / 2, size, size / 2);
	glVertex3f(size, 0.0, size);
	glVertex3f(size / 2, size, size / 2);
	glVertex3f(size, 0.0, 0.0);
	glVertex3f(size / 2, size, size / 2);
	glVertex3f(0.0, 0.0, 0.0);

	glEnd(); 
}