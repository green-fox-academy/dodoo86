#ifndef FISH_TANK_TANG_H
#define FISH_TANK_TANG_H
#include "Fish.h"

class Tang : public Fish {
public:
    Tang(string name, int weight, string colour, string memoryLoss);
    virtual void feed() override;
    virtual void status() override ;

protected:
    string _memoryLoss;

};


#endif //FISH_TANK_TANG_H
