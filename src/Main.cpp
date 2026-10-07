#include "raylib.h"
#include <iostream>

int main() {
    InitWindow(800, 600, "Hello World");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("what if the breath that stoked these grim fires / awaked, should blow them into sevenfold rage / and plunge us into the flames, or from above / should intermitted vengeance raise again / his red right hand to plague us?", 400, 300, 20, BLACK);
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}