//
// Created by David T Laszlo on 2019. 10. 20..
//

#include "Plant.h"

Plant::Plant(string colour): _colour(colour),_waterLevel(0) {}

bool Plant::needWater() {

    return _waterLevel<_waterNeed;
}

void Plant::gotWater(int water) {
    _waterLevel += water * _efficiency;

}
