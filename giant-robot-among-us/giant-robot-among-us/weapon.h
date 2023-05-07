#ifndef WEAPON_H
#define WEAPON_H

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"

class weapon : public Draw {
public:


    void lightsaber();

    void gun();
};

#endif
