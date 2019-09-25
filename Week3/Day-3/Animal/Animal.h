#include <iostream>
#include <string>

using namespace std;

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class animal {
public:
    animal ();
    void eat();
    void drink();
    void play();
    int hunger;
    int thirst;
    int getHunger() const;
    int getThirst() const;

};


#endif //ANIMAL_ANIMAL_H
