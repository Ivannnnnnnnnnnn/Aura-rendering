#pragma once
#ifndef AURACORE_H
#define AURACORE_H

#include <windows.h> // For Windows-specific functionality

/**
 * @class Aura
 * @brief Main class for initializing and controlling the rendering engine.
 *
 * The Aura class provides basic functions to clear the screen, draw basic shapes (rectangles, circles),
 * and manage the rendering window.
 *
 * Example usage:
 *
 * @code
 *  // 1. Initialize the library
 *  Aura aura(hInstance, nCmdShow, 800, 600, "Aura Rendering Library");
 *
 *  // 2. Main loop
 *  while (true) {
 *      aura.clear();
 *      aura.drawRectangle(100, 100, 200, 150, RGB(255, 0, 0)); // Draw red rectangle
 *      aura.drawCircle(400, 300, 50, RGB(0, 0, 255)); // Draw blue circle
 *      aura.display();
 *  }
 * @endcode
 */
class Aura {
public:
    /**
     * @brief Initializes the Aura rendering library.
     *
     * @param hInstance Handle to the current instance of the application.
     * @param nCmdShow How the window should be shown.
     * @param width Width of the window.
     * @param height Height of the window.
     * @param windowName Title of the window.
     */
    Aura(HINSTANCE hInstance, int nCmdShow, int width, int height, const char* windowName);

    /**
     * @brief Destructor that cleans up the rendering resources.
     */
    ~Aura();

    /**
     * @brief Clears the window by filling it with a white color.
     */
    void clear();

    /**
     * @brief Draws a rectangle on the window.
     *
     * @param x The top-left corner x-coordinate.
     * @param y The top-left corner y-coordinate.
     * @param width Width of the rectangle.
     * @param height Height of the rectangle.
     * @param color The color of the rectangle in RGB format.
     */
    void drawRectangle(int x, int y, int width, int height, COLORREF color);

    /**
     * @brief Draws a circle on the window.
     *
     * @param x The center x-coordinate of the circle.
     * @param y The center y-coordinate of the circle.
     * @param radius The radius of the circle.
     * @param color The color of the circle in RGB format.
     */
    void drawCircle(int x, int y, int radius, COLORREF color);

    /**
     * @brief Refreshes the window and draws everything.
     */
    void display();

    /**
     * @brief Gets the window handle for interaction (e.g., for window events).
     *
     * @return HWND The window handle.
     */
    HWND getWindowHandle() const;

private:
    HWND hwnd;
    HDC hdc;
    int width, height;
};

#endif // AURACORE_H
