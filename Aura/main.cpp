#include "AuraCore.h"
#include <windows.h>

int main() {
    HINSTANCE hInstance = GetModuleHandle(NULL);
    int nCmdShow = SW_SHOW;

    // Initialize the Aura rendering library
    Aura aura(hInstance, nCmdShow, 800, 600, "Aura Rendering Library");

    MSG msg = {};
    while (true) {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) break;
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        // Clear the screen
        aura.clear();

        // Draw a red rectangle and a blue circle
        aura.drawRectangle(100, 100, 200, 150, RGB(255, 0, 0)); // Red rectangle
        aura.drawCircle(400, 300, 50, RGB(0, 0, 255)); // Blue circle

        // Display the drawing
        aura.display();
    }

    return 0;
}
