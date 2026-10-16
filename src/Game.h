#pragma once
#include <vector>
#include "Plant.h"

class Game {
    std::vector<Plant> plants;
    void compilePlants();

    public:
    void draw();
    void update();
};