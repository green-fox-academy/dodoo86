#ifndef ANIMALS_BIRD_H
#define ANIMALS_BIRD_H


#include "Animal.h"

class Bird : public Animal{
public:
    Bird();
    Bird(string name);
    string breed() override;
    string getName() override;
protected:
    string _name;
};


#endif //ANIMALS_BIRD_H
