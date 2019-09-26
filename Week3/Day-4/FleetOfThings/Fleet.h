#ifndef FLEETOFTHINGS_FLEET_H
#define FLEETOFTHINGS_FLEET_H

#include <vector>
#include <string>

#include "Thing.h"

class Fleet
{
public:
    Fleet();

    void add(const Thing& thing);
    std::string toString();

private:
    std::vector<Thing> things;
};


#endif //FLEETOFTHINGS_FLEET_H
