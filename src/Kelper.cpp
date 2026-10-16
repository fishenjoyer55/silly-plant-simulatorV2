#include <vector>
#include "Plant.h"
#include "Kelper.h"

//kelp is used to produce bubble elevators in minecraft. thus kelper should bubble sort. think about it
void Kelper::sortPlantsByLayer(std::vector<Plant>& plants) {
    for (std::size_t i = 0; i < *plants.size(); i++) {
        for (std::size_t j = 0; j < plants.size() - i - 1; j++) {
            if (plants[j].y < plants[j + 1]) {
                std::swap(plants[j], plants[j + 1]);
            }
        }   
    }
}