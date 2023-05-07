#ifndef UPPERBODY_H
#define UPPERBODY_H

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"

class UpperBody : public Draw {
	public:
		void finger();
		void hand();
		void hip();
		void torso();
};

#endif