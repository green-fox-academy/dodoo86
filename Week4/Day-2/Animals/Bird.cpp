#include <iostream>
#include "Bird.h"

Bird::Bird(string name):Animal(name) {}

string Bird::breed() {
    return "laying eggs";
}
string Bird::getName() {
    return "Parrot";
}