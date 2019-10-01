#include "Reptile.h"

Reptile::Reptile(string name):Animal(name) {}

string Reptile::breed() {
    return "laying eggs";
}
string Reptile::getName() {
    return "Crocodile";
}
