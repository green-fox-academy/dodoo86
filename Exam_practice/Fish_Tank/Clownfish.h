#ifndef FISH_TANK_CLOWNFISH_H
#define FISH_TANK_CLOWNFISH_H
#include "Fish.h"

class Clownfish : public Fish {

public:
    Clownfish(string name, int weight, string colour, string colour2);
    virtual void feed() override ;
    virtual void status() override ;

protected:
    string _colour2;


};


#endif //FISH_TANK_CLOWNFISH_H
