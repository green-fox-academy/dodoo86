#ifndef GFORGANIZATION_MENTOR_H
#define GFORGANIZATION_MENTOR_H

#include "Person.h"


using namespace std;

class Mentor : public Person {
public:
    Mentor();
    Mentor (string name, int age, string gender, string level);
    void getGoal();
    void introduce();

protected:
    string _level;
};


#endif //GFORGANIZATION_MENTOR_H
