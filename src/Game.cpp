#include "raylib.h"
#include <vector>
#include "Game.h"
#include "Plant.h"
#include "Kelper.h"

void Game::draw() {
    for (int i = 0; i < plants.size(); i++) {
        DrawTexture(plants[i].sprite, plants[i].x - 300, plants[i].y - 300, WHITE);
    }
}

void Game::update() {
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        Vector2 mouse = GetMousePosition();
        plants.emplace_back(mouse.x, mouse.y);
    }
}

void Game::compilePlants() {
    Kelper::sortPlantsByLayer(plants);
}