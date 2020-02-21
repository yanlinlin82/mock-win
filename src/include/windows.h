#pragma once
#include <stdio.h>

//////////////////////////////////////////////////
// macro definition

#define WINAPI
#define CALLBACK

#define ARRAYSIZE(x) (sizeof(x)/sizeof((x)[0]))
#define MAKEINTRESOURCE(x) ((int)(x))

//////////////////////////////////////////////////
// basic type

typedef unsigned int BOOL;
enum { FALSE = 0, TRUE = 1 };

typedef char TCHAR;
typedef unsigned int UINT;
typedef int DWORD;
typedef long int LRESULT;

typedef void *LPVOID;
typedef char *LPCSTR;
typedef char *LPTSTR;

typedef int ATOM;
typedef int WPARAM;
typedef long int LPARAM;

//////////////////////////////////////////////////
// handle

typedef struct{} *HINSTANCE;
typedef struct{} *HWND;
typedef struct{} *HDC;
typedef struct{} *HMENU;
typedef struct{} *HICON;
typedef struct{} *HCURSOR;
typedef struct{} *HBRUSH;

//////////////////////////////////////////////////
// resource

enum { IDC_ARROW };
enum { COLOR_WINDOW };

HCURSOR WINAPI LoadCursor(HINSTANCE hInst, int n);

//////////////////////////////////////////////////
// message

enum { WM_PAINT, WM_DESTROY };

typedef struct { WPARAM wParam; LPARAM lParam; } MSG, *LPMSG;

void WINAPI PostQuitMessage(int nExitCode);
BOOL WINAPI GetMessage(LPMSG msg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
BOOL WINAPI TranslateMessage(LPMSG msg);
LRESULT WINAPI DispatchMessage(LPMSG msg);

//////////////////////////////////////////////////
// windows

enum { CS_HREDRAW, CS_VREDRAW };

typedef struct {
	int cbSize, style;
	LRESULT CALLBACK (*lpfnWndProc)(HWND, UINT, WPARAM, LPARAM);
	int cbClsExtra, cbWndExtra;
	HINSTANCE hInstance;
	HICON hIcon;
	HCURSOR hCursor;
	HBRUSH hbrBackground;
	LPTSTR lpszMenuName, lpszClassName;
} WNDCLASS;

enum { WS_OVERLAPPEDWINDOW };
enum { CW_USEDEFAULT };

ATOM WINAPI RegisterClass(WNDCLASS *lpWndClass);

LRESULT WINAPI DefWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

HWND WINAPI CreateWindow(LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle,
		int x, int y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu,
		HINSTANCE hInst, LPVOID lpParam);
BOOL WINAPI ShowWindow(HWND hWnd, int nCmdShow);
BOOL WINAPI UpdateWindow(HWND hWnd);

//////////////////////////////////////////////////
// paint

typedef struct {} PAINTSTRUCT;

BOOL WINAPI TextOut(HDC hDC, int x, int y, LPCSTR lpString, int c);

HDC WINAPI BeginPaint(HWND hWnd, PAINTSTRUCT *ps);
BOOL WINAPI EndPaint(HWND hWnd, PAINTSTRUCT *ps);
