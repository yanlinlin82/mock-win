#include "windows.h"

//////////////////////////////////////////////////
// resource

HCURSOR WINAPI LoadCursor(HINSTANCE hInst, int n)
{
	return NULL;
}

//////////////////////////////////////////////////
// message

void WINAPI PostQuitMessage(int nExitCode)
{
}

BOOL WINAPI GetMessage(LPMSG msg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
	return FALSE;
}

BOOL WINAPI TranslateMessage(LPMSG msg)
{
	return FALSE;
}

LRESULT WINAPI DispatchMessage(LPMSG msg)
{
	return 0;
}

//////////////////////////////////////////////////
// windows

ATOM WINAPI RegisterClass(WNDCLASS *lpWndClass)
{
	return 0;
}

LRESULT WINAPI DefWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	return 0;
}

HWND WINAPI CreateWindow(LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle,
		int x, int y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu,
		HINSTANCE hInst, LPVOID lpParam)
{
	return NULL;
}

BOOL WINAPI ShowWindow(HWND hWnd, int nCmdShow)
{
	return TRUE;
}

BOOL WINAPI UpdateWindow(HWND hWnd)
{
	return TRUE;
}

//////////////////////////////////////////////////
// paint

BOOL WINAPI TextOut(HDC hDC, int x, int y, LPCSTR lpString, int c)
{
	return TRUE;
}

HDC WINAPI BeginPaint(HWND hWnd, PAINTSTRUCT *ps)
{
	return NULL;
}

BOOL EndPaint(HWND hWnd, PAINTSTRUCT *ps)
{
	return TRUE;
}

//////////////////////////////////////////////////
// main

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpCmdLine, int nCmdShow);

int main(int argc, char** argv)
{
	return WinMain(NULL, NULL, NULL, 0);
}
