#ifndef LONDONBRIDGE_H
#define LONDONBRIDGE_H

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>

#include "DrawFunctions.h"

class LondonBridge: public Draw{
	public:
		void tower();
		void roof();
		void pillar();
		void londonBridge();
};

#endif