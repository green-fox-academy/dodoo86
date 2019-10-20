#ifndef ZOO_MONKEY_H
#define ZOO_MONKEY_H
#include "Animal.h"

class Monkey : public Animal {
public:
    virtual bool isHungry() override;
    Monkey(string name,int age,string gender);
    Monkey(string name);

};


#endif //ZOO_MONKEY_H
