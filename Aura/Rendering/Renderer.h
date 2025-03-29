#pragma once
#ifndef RENDERER_H
#define RENDERER_H

#include <windows.h>

/**
 * @class Renderer
 * @brief Contains basic functions to render shapes on the screen.
 *
 * This class abstracts the drawing functions such as drawing rectangles and circles using GDI.
 */
class Renderer {
public:
    /**
     * @brief Clears the window to a default background color (white).
     *
     * @param hdc The device context handle for drawing.
     * @param hwnd The window handle.
     * @param width The width of the window.
     * @param height The height of the window.
     */
    static void clear(HDC hdc, HWND hwnd, int width, int height);

    /**
     * @brief Draws a filled rectangle on the screen.
     *
     * @param hdc The device context handle for drawing.
     * @param x The top-left corner x-coordinate.
     * @param y The top-left corner y-coordinate.
     * @param width Width of the rectangle.
     * @param height Height of the rectangle.
     * @param color Color of the rectangle in RGB format.
     */
    static void drawRectangle(HDC hdc, int x, int y, int width, int height, COLORREF color);

    /**
     * @brief Draws a filled circle on the screen.
     *
     * @param hdc The device context handle for drawing.
     * @param x The center x-coordinate of the circle.
     * @param y The center y-coordinate of the circle.
     * @param radius The radius of the circle.
     * @param color Color of the circle in RGB format.
     */
    static void drawCircle(HDC hdc, int x, int y, int radius, COLORREF color);
};

#endif // RENDERER_H
