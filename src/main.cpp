#include <iostream>
#include "raylib.h"

int main()
{
    InitWindow(500, 500, "Hi");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawRectangle(GetMouseX(), GetMouseY(), 10, 10, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}