#ifndef ANIMALS_MAMMAL_H
#define ANIMALS_MAMMAL_H
#include "Animal.h"

class Mammal : public Animal{
public:
    Mammal();
    Mammal(string name);
    string breed() override;
    string getName() override;

};

#endif //ANIMALS_MAMMAL_H
