#include "Renderer.h"
#include <windows.h>

void Renderer::clear(HDC hdc, HWND hwnd, int width, int height) {
    // Clear the screen with a white color
    RECT rect;
    GetClientRect(hwnd, &rect);
    FillRect(hdc, &rect, (HBRUSH)(COLOR_WINDOW + 1));
}

void Renderer::drawRectangle(HDC hdc, int x, int y, int width, int height, COLORREF color) {
    HBRUSH brush = CreateSolidBrush(color);
    RECT rect = { x, y, x + width, y + height };
    FillRect(hdc, &rect, brush);
    DeleteObject(brush);
}

void Renderer::drawCircle(HDC hdc, int x, int y, int radius, COLORREF color) {
    HPEN pen = CreatePen(PS_SOLID, 1, color);
    HBRUSH brush = CreateSolidBrush(color);

    SelectObject(hdc, pen);
    SelectObject(hdc, brush);

    Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);

    DeleteObject(pen);
    DeleteObject(brush);
}
