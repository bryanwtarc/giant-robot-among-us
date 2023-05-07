#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <math.h>
#include "DrawFunctions.h"
#include "LondonBridge.h"
#include "Head.h"
#include "legs.h"
#include "UpperBody.h"

#define WINDOW_TITLE "OpenGL Window"

bool	bridgeOn = false;					//Toggle bridge

/* ROTATION VARIABLES */
float	rotateX = 0, rotateY = 0, speed = 5;

/* PROJECTION VARIABLES */
bool	isOrtho = false;
float	ty = 0, tz = 0, tSpeed = 0.5,			//translate in z-axis with tSpeed
		Onear = -10, Ofar = 10,				//Ortho view's near and far
		Pnear = 1, Pfar = 30,				//Perspective view's near and far
		pTx = 0, pTy = 0, pTSpeed = 0.1,	//Translation(Tx, Ty) for projection
		pRy = 0, pRySpeed = 2,				//Rotate projection in Y axis
		pRx = 0, pRxSpeed = 2,				//Rotate projection in X axis
		pRz = 0, pRzSpeed = 2;				//ROtate projection in Z axis
/*-------------------*/

/* LIGHTING VARIABLES */
bool	lightOn = false;
float	amb[] = { 1, 0, 0 },		//Red color ambient light
		dif[] = { 1, 0, 0 },		//Red color diffuse light
		posA[] = { 0, 0.8, 0 },		//Position for ambient lighting
		posD[] = { 0, 0.8, 0 },		//Position for diffuse lighting
		ambM[] = { 0, 0.5, 1 },		//Light Blue color object material for ambient lighting
		difM[] = { 0, 0.5, 1 };		//Light Blue color object material for diffuse lighting
/* ------------------- */

LRESULT WINAPI WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	case WM_KEYDOWN:   
		if (wParam == VK_ESCAPE) PostQuitMessage(0);

		else if (wParam == VK_SUBTRACT) bridgeOn = !bridgeOn;		//Toggle bridge on/off (Default: On)

		else if (wParam == VK_TAB) lightOn = !lightOn;				//Switch lighting on/off (Default: Off)

		/* MOVEMENT CONTROL */
		//else if (wParam == 0x57) 	//W
		//else if (wParam == 0x53)	//S
		//else if (wParam == 0x41) 	//A
		//else if (wParam == 0x44) 	//D
		/* ---------------- */

		/* PERSPECTIVE CONTROL */
		else if (wParam == VK_LEFT) pRy += pRySpeed;			//Rotate projection in Y axis	(LEFT)
		else if (wParam == VK_RIGHT) pRy -= pRySpeed;			//Rotate projection in Y axis	(RIGHT)
		else if (wParam == VK_UP) pRx -= pRxSpeed;				//Rotate projection in X axis	(UP)
		else if (wParam == VK_DOWN) pRx += pRxSpeed;			//Rotate projection in X axis	(DOWN)
		else if (wParam == VK_HOME) pRz += pRzSpeed;			//Rotate projection in Z axis anti-clockwise 	(HOME)	
		else if (wParam == VK_END) pRz -= pRzSpeed;				//Rotate projection in Z axis clockwise			(END)
		else if (wParam == VK_CONTROL) isOrtho = !isOrtho;		//Switch Ortho/Perspective 
		else if (wParam == VK_RETURN) {
			pRy = 0; pRx = 0; pRz = 0;							//Reset projection		(ENTER)
		}
		/* ------------------- */

		/* TRANSFORMATION CONTROL */
		else if (wParam == 0x45) tz += tSpeed;					//Near					(E)
		else if (wParam == 0x51) tz -= tSpeed;					//Far					(Q)
		else if (wParam == 0x31) ty += tSpeed;					//move projection up	(1)
		else if (wParam == 0x32) ty -= tSpeed;					//move projection down	(2)
		else if (wParam == VK_NUMPAD4) rotateY -= speed;
		else if (wParam == VK_NUMPAD6) rotateY += speed;
		else if (wParam == VK_NUMPAD8) rotateX -= speed;
		else if (wParam == VK_NUMPAD2) rotateX += speed;
		/* ---------------- */

		break;

	default:
		break;
	}

	return DefWindowProc(hWnd, msg, wParam, lParam);
}
//--------------------------------------------------------------------

bool initPixelFormat(HDC hdc)
{
	PIXELFORMATDESCRIPTOR pfd;
	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));

	pfd.cAlphaBits = 8;
	pfd.cColorBits = 32;
	pfd.cDepthBits = 24;
	pfd.cStencilBits = 0;

	pfd.dwFlags = PFD_DOUBLEBUFFER | PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW;

	pfd.iLayerType = PFD_MAIN_PLANE;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
	pfd.nVersion = 1;

	// choose pixel format returns the number most similar pixel format available
	int n = ChoosePixelFormat(hdc, &pfd);

	// set pixel format returns whether it sucessfully set the pixel format
	if (SetPixelFormat(hdc, n, &pfd))
	{
		return true;
	}
	else
	{
		return false;
	}
}
//--------------------------------------------------------------------

void lighting() {
	switch (lightOn) {
	case true:
		glEnable(GL_LIGHTING);				//Enable lighting for whole scene
		break;
	case false:
		glDisable(GL_LIGHTING);				//Disable lighting for whole scene
	}

	////Light 0
	//glLightfv(GL_LIGHT0, GL_AMBIENT, amb);		//Ambient Light with rgb {1, 0, 0} (RED)
	//glLightfv(GL_LIGHT0, GL_POSITION, posA);	//Sets position {0, 0.8, 0} (ABOVE)
	//glEnable(GL_LIGHT0);

	//Light 1
	glLightfv(GL_LIGHT1, GL_DIFFUSE, dif);		//Diffuse Light with rgb {1, 0, 0} (RED)
	glLightfv(GL_LIGHT1, GL_POSITION, posD);	//Sets position 
	glEnable(GL_LIGHT1);

}

void projection() {
	double frustum = 1;
	glMatrixMode(GL_PROJECTION);	//refer to projection matrix
	glLoadIdentity();				//reset the projection matrix
	glTranslatef(pTx, pTy, 0);		//translate projection
	glRotatef(pRy, 0, 1, 0);		//Rotate in y for projection
	glRotatef(pRx, 1, 0, 0);		//Rotate in x for projection
	glRotatef(pRz, 0, 0, 1);		//Rotate in z for projection

	if (isOrtho) {
		//Ortho view 
		glOrtho(-10, 10, -10, 10, Onear, Ofar);
	}
	else {
		//Perspective view : default
		//gluPerspective(30, 1, -1, 1);
		glFrustum(-frustum, frustum, -frustum, frustum, Pnear, Pfar);
	}
}

void display() {
	Draw draw;
	LondonBridge bridge;
	Head head;
	Legs leg;
	UpperBody upper;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.5, 0.7, 1, 1);
	projection();
	glMatrixMode(GL_MODELVIEW);

	lighting();
	glPushMatrix();
		glTranslatef(0, ty, tz);
		glRotatef(rotateY, 0, 1, 0);
		glRotatef(rotateX, 1, 0, 0);
		
		/* BRIDGE */
		switch (bridgeOn) {		
			case true:
				glPushMatrix();
					bridge.londonBridge();
				glPopMatrix();
				break;
			case false:
				break;
		}
		/* ----------- */

		/* HEAD */
		glPushMatrix();
			head.gundamHead();
		glPopMatrix();
		/* ------------*/

		///* UPPERBODY */
		//glPushMatrix();
		//	upper.hand();
		//glPopMatrix();
		///* ------------*/

		/* UPPERBODY */
		/*glPushMatrix();
			upper.hand();
		glPopMatrix();*/
		/* ---------- */

<<<<<<< HEAD
		///* LEGS */
		//glPushMatrix();
		//	glScalef(4, 4, 4);
		//	glPushMatrix();
		//		glTranslatef(0, -0.8, 0);
		//		leg.mergeLegs();
		//	glPopMatrix();
		//	glPushMatrix();
		//		glTranslatef(0, -0.8, -0.5);
		//		leg.mergeLegs();
		//	glPopMatrix();
		//	glPushMatrix();
		//		glTranslatef(0, -0.25, 0);
		//		upper.hip();
		//	glPopMatrix();
		//glPopMatrix();
		///* ------------ */
=======
		/* LEGS */
		glPushMatrix();
			glScalef(3, 3, 3);
			glPushMatrix();
				glTranslatef(0, -0.8, 0);
				leg.mergeLegs();
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0, -0.8, -0.5);
				leg.mergeLegs();
			glPopMatrix();
			glPushMatrix();
			glTranslatef(0, -0.25, 0);
				upper.hip();
			glPopMatrix();
			glPushMatrix();
				upper.torso();
			glPopMatrix();
		glPopMatrix();
		/* ------------ */
>>>>>>> 95ff9eb155b0a0d9887a21c761041d6913f31abb

		
	glPopMatrix();
}
//--------------------------------------------------------------------

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, int nCmdShow)
{
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.hInstance = GetModuleHandle(NULL);
	wc.lpfnWndProc = WindowProcedure;
	wc.lpszClassName = WINDOW_TITLE;
	wc.style = CS_HREDRAW | CS_VREDRAW;

	if (!RegisterClassEx(&wc)) return false;

	HWND hWnd = CreateWindow(WINDOW_TITLE, WINDOW_TITLE, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 800, 800,
		NULL, NULL, wc.hInstance, NULL);

	//--------------------------------
	//	Initialize window for OpenGL
	//--------------------------------

	HDC hdc = GetDC(hWnd);

	//	initialize pixel format for the window
	initPixelFormat(hdc);

	//	get an openGL context
	HGLRC hglrc = wglCreateContext(hdc);

	//	make context current
	if (!wglMakeCurrent(hdc, hglrc)) return false;

	//--------------------------------
	//	End initialization
	//--------------------------------

	ShowWindow(hWnd, nCmdShow);

	MSG msg;
	ZeroMemory(&msg, sizeof(msg));

	while (true)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT) break;

			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		display();

		SwapBuffers(hdc);
	}

	UnregisterClass(WINDOW_TITLE, wc.hInstance);

	return true;
}
//-------------------------------------------------------------------