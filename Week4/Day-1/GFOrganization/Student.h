#ifndef GFORGANIZATION_STUDENT_H
#define GFORGANIZATION_STUDENT_H


#include "Person.h"

class Student : public Person{
public:
    Student();
    Student (string name, int age, string gender,string previousOrganization);
    void getGoal();
    void introduce();
    void skippedDays(Student numberOfDays);
protected:
    string _previousOrganization;
    int _skippedDays;
    int _numberOfDays;


};


#endif //GFORGANIZATION_STUDENT_H
