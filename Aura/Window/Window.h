#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include <windows.h>

/**
 * @class Window
 * @brief A utility class to create and manage the window for rendering.
 *
 * This class handles creating the window, registering the window class, and initializing the device context (DC).
 */
class Window {
public:
    /**
     * @brief Creates a window and initializes the device context.
     *
     * @param hInstance Handle to the current instance of the application.
     * @param nCmdShow How the window should be shown.
     * @param width Width of the window.
     * @param height Height of the window.
     * @param windowName Title of the window.
     * @param hwnd Reference to the window handle that will be created.
     * @param hdc Reference to the device context handle that will be created.
     */
    static void createWindow(HINSTANCE hInstance, int nCmdShow, int width, int height, const char* windowName, HWND& hwnd, HDC& hdc);
};

#endif // WINDOW_H
