#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>

class Draw {
	public:
		void cube(float size) {
			glBegin(GL_QUADS);

			//Face 1 : Bottom
			glColor3f(1.0, 0.0, 0.0);
			glVertex3f(0.0, 0.0, size);
			glVertex3f(size, 0.0, size);
			glVertex3f(size, 0.0, 0.0);
			glVertex3f(0.0, 0.0, 0.0); //Face 2 must connect with this point

			//Face 2 : Left
			glColor3f(1.0, 1.0, 0.0);
			glVertex3f(0.0, 0.0, 0.0);
			glVertex3f(0.0, size, 0.0);
			glVertex3f(0.0, size, size);
			glVertex3f(0.0, 0.0, size);

			//Face 3 : Front
			glColor3f(1.0, 0.0, 1.0);
			glVertex3f(0.0, 0.0, size);
			glVertex3f(0.0, size, size);
			glVertex3f(size, size, size);
			glVertex3f(size, 0.0, size);

			//Face 4 : Right
			glColor3f(0.0, 0.0, 1.0);
			glVertex3f(size, 0.0, size);
			glVertex3f(size, size, size);
			glVertex3f(size, size, 0.0);
			glVertex3f(size, 0.0, 0.0);

			//Face 5 : Bottom
			glColor3f(0.0, 1.0, 0.0);
			glVertex3f(size, 0.0, 0.0);
			glVertex3f(0.0, 0.0, 0.0);
			glVertex3f(0.0, size, 0.0);
			glVertex3f(size, size, 0.0);

			//Face 6 : Back
			glColor3f(0.0, 1.0, 1.0);
			glVertex3f(size, size, 0.0);
			glVertex3f(0.0, size, 0.0);
			glVertex3f(0.0, size, size);
			glVertex3f(size, size, size);

			glEnd();
		}

		void sphere(float r) {
			GLUquadricObj* sphere = NULL;
			sphere = gluNewQuadric();
			gluQuadricDrawStyle(sphere, GLU_FILL);
			gluQuadricTexture(sphere, true);			//For Texturing
			gluSphere(sphere, r, 30, 30);
			gluDeleteQuadric(sphere);
		}

		void cylinder(float br, float tr, float h) {

			GLUquadricObj* cylinder = NULL; // create a quadric obj pointer
			cylinder = gluNewQuadric();		// create a quadric obj
			gluQuadricDrawStyle(cylinder, GLU_FILL);		// SET THE DRAW STYLE 

			gluQuadricTexture(cylinder, true);				//For Texturing
			gluCylinder(cylinder, br, tr, h, 30, 30);		// gluCylinder (base radius, top radius, height, slice, stack)

			gluDeleteQuadric(cylinder);			// delete the quadric obj
		}

		void cone(float tr, float h) {
			GLUquadricObj* cylinder = NULL; // create a quadric obj pointer
			cylinder = gluNewQuadric();		// create a quadric obj
			gluQuadricDrawStyle(cylinder, GLU_FILL);		// SET THE DRAW STYLE 

			gluCylinder(cylinder, 0, tr, h, 15, 5);		// gluCylinder (base radius, top radius, height, slice, stack)

			gluDeleteQuadric(cylinder);			// delete the quadric obj
		}

		void sphereWithoutGLU() {
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

		void pyramid(float size) {

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
};