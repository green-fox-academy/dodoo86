#ifndef ZOO_LION_H
#define ZOO_LION_H
#include "Animal.h"

class Lion : public Animal {
public:
    virtual bool isHungry() override;
    Lion(string name,int age,string gender);
    Lion(string name);

};


#endif //ZOO_LION_H
