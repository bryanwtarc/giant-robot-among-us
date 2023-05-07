#ifndef ARMS_H
#define ARMS_H

#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "DrawFunctions.h"

class Arms : public Draw
{
public:

	void upperArmLeft();

	void lowerArmLeft();

	void lowerWristLeft();

	void upperArmRight();

};

#endif

