#ifndef DRAWFUNCTIONS_H
#define DRAWFUNCTIONS_H

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>

class Draw {
	public:
		void cube(float size);

		void sphere(float r);

		void cylinder(float br, float tr, float h);

		void cone(float tr, float h);

		void sphereWithoutGLU();

		void pyramid(float size);
};

#endif