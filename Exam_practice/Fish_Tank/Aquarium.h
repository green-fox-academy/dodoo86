#ifndef FISH_TANK_AQUARIUM_H
#define FISH_TANK_AQUARIUM_H

#include <string>
#include <vector>
#include "Fish.h"


class Aquarium {
public:
    Aquarium();
    void addFish(Fish*);
    void removeFish();
    void getStatus();
    void feeding();

protected:
    vector<Fish*>_fishes;


};


#endif //FISH_TANK_AQUARIUM_H
