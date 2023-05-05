#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "Draw Functions.cpp"

class LondonBridge {
	public:
		void drawBridge() {
			Draw draw;
			draw.cylinder();
		}
}