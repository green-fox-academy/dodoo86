#ifndef GFOPRACTICE_MENTOR_H
#define GFOPRACTICE_MENTOR_H


#include "Person.h"

class Mentor : public Person {
public:
    Mentor();

    Mentor(const string &name, int age, const string &gender, const string &level);

    virtual void getGoal() override ;
    virtual void introduce() override ;

protected:
    string _level;
};


#endif //GFOPRACTICE_MENTOR_H
