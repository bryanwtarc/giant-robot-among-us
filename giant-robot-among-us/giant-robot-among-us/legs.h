#ifndef LEGS_H
#define LEGS_H

#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "DrawFunctions.h"

class Legs: public Draw
{
	public:
		void gundamFeet();
		void gundamRThigh();
		void gundamLThigh();
		void gundamCrotchPlate();
};

#endif

