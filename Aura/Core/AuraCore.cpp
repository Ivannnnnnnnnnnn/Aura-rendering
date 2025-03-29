#include "AuraCore.h"
#include <iostream>
#include "Window.h"
#include "Renderer.h"

Aura::Aura(HINSTANCE hInstance, int nCmdShow, int width, int height, const char* windowName)
    : width(width), height(height) {
    // Create window and initialize the device context
    Window::createWindow(hInstance, nCmdShow, width, height, windowName, hwnd, hdc);
}

Aura::~Aura() {
    // Clean up the resources
    ReleaseDC(hwnd, hdc);
}

void Aura::clear() {
    // Clear the window using Renderer
    Renderer::clear(hdc, hwnd, width, height);
}

void Aura::drawRectangle(int x, int y, int width, int height, COLORREF color) {
    Renderer::drawRectangle(hdc, x, y, width, height, color);
}

void Aura::drawCircle(int x, int y, int radius, COLORREF color) {
    Renderer::drawCircle(hdc, x, y, radius, color);
}

void Aura::display() {
    // Refresh the window
    InvalidateRect(hwnd, NULL, TRUE);
    UpdateWindow(hwnd);
}

HWND Aura::getWindowHandle() const {
    return hwnd;
}
