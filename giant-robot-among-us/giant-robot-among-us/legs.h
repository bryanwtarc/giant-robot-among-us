#ifndef LEGS_H
#define LEGS_H

#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "DrawFunctions.h"

class Legs: public Draw
{
	public:
		void gundamLegs();
		void gundamLowerLeg();
		void gundamThigh();
		void mergeLegs();
		void legAddons();
};

#endif

