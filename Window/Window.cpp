#include "Window.h"
#include <windows.h>
#include <iostream>

void Window::createWindow(HINSTANCE hInstance, int nCmdShow, int width, int height, const char* windowName, HWND& hwnd, HDC& hdc) {
    // Window class registration
    WNDCLASS wc = {};
    wc.lpfnWndProc = DefWindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "AuraWindowClass";

    if (!RegisterClass(&wc)) {
        std::cerr << "Window class registration failed!" << std::endl;
        return;
    }

    // Create window
    hwnd = CreateWindowEx(
        0, // Optional window styles
        wc.lpszClassName, windowName, WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, width, height,
        NULL, NULL, hInstance, NULL);

    if (hwnd == NULL) {
        std::cerr << "Window creation failed!" << std::endl;
        return;
    }

    ShowWindow(hwnd, nCmdShow);

    // Get device context for drawing
    hdc = GetDC(hwnd);
}
