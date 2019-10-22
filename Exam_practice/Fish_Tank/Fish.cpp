#include "Fish.h"

Fish::Fish(string name, int weight, string colour) : _name(name), _weight(weight), _colour(colour) {}


int Fish::getWeight() {

    return _weight;
}


