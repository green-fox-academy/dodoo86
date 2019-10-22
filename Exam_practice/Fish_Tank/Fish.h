#ifndef FISH_TANK_FISH_H
#define FISH_TANK_FISH_H

#include <iostream>
#include <string>

using namespace std;


class Fish {
public:
    Fish(string name, int weight, string colour);
    virtual void status() = 0;
    virtual void feed() = 0;
    int getWeight();

protected:
    string _name;
    int _weight;
    string _colour;

};


#endif //FISH_TANK_FISH_H
