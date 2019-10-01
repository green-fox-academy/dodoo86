#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H
#include <string>
using namespace std;

class Animal {
public:
    Animal(string name);
    virtual string getName() = 0;
    virtual string breed() = 0;

protected:
    string _name;
};


#endif //ANIMALS_ANIMAL_H
