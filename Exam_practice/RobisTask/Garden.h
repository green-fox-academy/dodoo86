#ifndef ROBISTASK_GARDEN_H
#define ROBISTASK_GARDEN_H

#include <vector>
#include "Plant.h"
using namespace std;


class Garden {
public:
    void addPlant(Plant*);
    void locsolas(float);

protected:
    vector<Plant*>_plants;
};


#endif //ROBISTASK_GARDEN_H
