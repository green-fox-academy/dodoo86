#ifndef GFORGANIZATION_SPONSOR_H
#define GFORGANIZATION_SPONSOR_H

#include "Person.h"

using namespace std;


class Sponsor : public Person {
public:
    Sponsor();
    Sponsor(string name, int age, string gender, string company);
    void introduce();
    void hire();
    void getGoal();

protected:
    string _company;
    int _hiredStudents;
};


#endif //GFORGANIZATION_SPONSOR_H
