#ifndef ANIMALS_REPTILE_H
#define ANIMALS_REPTILE_H

#include "Animal.h"

class Reptile : public Animal{
public:
    Reptile();
    Reptile(string name);
    string breed() override;
    string getName() override;

};


#endif //ANIMALS_REPTILE_H
