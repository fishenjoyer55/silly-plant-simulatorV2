#include "raylib.h"
#include <iostream>
#include <vector>
#include "Game.h"
#include "Plant.h"

int main() {
    InitWindow(1200, 900, "the planst.");
    if (!IsWindowReady()) return 1;

    std::cout << "yo the game launched" << std::endl;
    SetWindowFocused();

    const char * errorMessage = "what if the breath that stoked these grim fires \n\
    awaked, should blow them into sevenfold rage \n\
    and plunge us into the flames, or from above \n\
    should intermitted vengeance raise again \n\
    his red right hand to plague us? what if all \n\
    her stores were opened, and this firmament of hell \n\
    should sprout her cataracts of fire \n\
    impendent horrors, threatening hideous fall \n\
    one day upon our heads! while we perhaps \n\
    designing or exhorting glorious war \n\
    caught in a fiery tempest shall be hurled \n\
    each on his rock transfixed, the sport and prey \n\
    of racking whirlwinds or forever sunk \n\
    under yon boiling ocean, wrapt in chains \n\
    there to converse with everlasting groans \n\
    unrespited, unpitied, unreprieved \n\
    ages of hopeless end. this would be worse";

    bool showError = false;

    Game game;

    while (!WindowShouldClose()) {
        const double frameStart = GetTime();
        PollInputEvents();
        if (WindowShouldClose()) break;
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();

        if (IsKeyDown(KEY_UP)) {
            showError = true;
        } else {
            showError = false;
        }

        if (showError) {
            std::cout << "key up is being pressed";
            BeginDrawing();
            DrawText(errorMessage, 100, 100, 20, BLACK);
            EndDrawing();
        }

        game.update();

        game.draw();

        
        SwapScreenBuffer();
        const double remaining = 1.0 / 60.0 - (GetTime() - frameStart);
        if (remaining > 0.0) WaitTime(remaining);
    }
    
    CloseWindow();
    return 0;
}