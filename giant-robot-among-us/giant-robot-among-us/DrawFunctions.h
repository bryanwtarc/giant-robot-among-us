#ifndef DRAWFUNCTIONS_H
#define DRAWFUNCTIONS_H

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>

class Draw {
	public:
		void quad(float size);

		void cube(float size);

		void fullSphere(float r);

		void lineSphere(float r);

		void lineCylinder(float br, float tr, float h);

		void fullCylinder(float br, float tr, float h);

		void lineCone(float tr, float h);

		void fullCone(float tr, float h);

		void sphereWithoutGLU();

		void linePyramid(float size);

		void fullPyramid(float size);
};

#endif