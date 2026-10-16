#include <iostream>
#include "raylib.h"
#include "Plant.h"

Plant::Plant(int x, int y) {
    this->x = x;
    this->y = y;
    this->sprite = LoadTexture("src/plantSprites/sillygrass2.png");
    std::cout << "i just got planted at " << this->x << ", " << this->y << std::endl;
}