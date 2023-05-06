#ifndef GUNDAM_H
#define GUNDAM_H

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"

class Gundam: public Draw {
	public:
		void head();

		void chest();

		void upperArm();

		void lowerArm();

		void upperLeg();

		void lowerLeg();
};

#endif
