#ifndef GFOPRACTICE_SPONSOR_H
#define GFOPRACTICE_SPONSOR_H


#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor();

    Sponsor(const string &name, int age, const string &gender, const string &company);

     void introduce();
     void hire();
     void getGoal();

protected:
    string _company;
    int _hiredStudents;


};


#endif //GFOPRACTICE_SPONSOR_H
