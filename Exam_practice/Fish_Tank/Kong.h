#ifndef FISH_TANK_KONG_H
#define FISH_TANK_KONG_H
#include "Fish.h"

class Kong : public Fish {
public:
    Kong(string name, int weight, string colour);
    virtual void feed() override;
    virtual void status() override ;
};


#endif //FISH_TANK_KONG_H
