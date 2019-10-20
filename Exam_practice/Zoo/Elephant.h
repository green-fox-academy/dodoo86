#ifndef ZOO_ELEPHANT_H
#define ZOO_ELEPHANT_H
#include "Animal.h"

class Elephant : public Animal {
public:
    virtual bool isHungry() override;
    Elephant(string name,int age,string gender);
    Elephant(string name);


};


#endif //ZOO_ELEPHANT_H
