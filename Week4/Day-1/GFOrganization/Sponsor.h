//
// Created by David T Laszlo on 2019. 09. 30..
//

#ifndef GFORGANIZATION_SPONSOR_H
#define GFORGANIZATION_SPONSOR_H


#include "Person.h"

class Sponsor: public Person {
public:
    Sponsor();
    Sponsor(string name, int age, string gender,string company,int hiredStudents);
    void introduce();
    void hire();
    void getGoal();

protected:
    string _company;
    int _hiredStudents;


};


#endif //GFORGANIZATION_SPONSOR_H
