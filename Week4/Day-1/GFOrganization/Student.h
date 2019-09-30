#ifndef GFORGANIZATION_STUDENT_H
#define GFORGANIZATION_STUDENT_H


#include "Person.h"
using namespace std;

class Student : public Person {
public:
    Student();
    Student(string name, int age, string gender, string previousOrganization);
    void skippedDays(int numberOfDays);
    virtual void introduce() override;
    virtual void getGoal() override;

protected:
    string _previousOrganization;
    int _skippedDays;
    int _numberOfDays;
};


#endif //GFORGANIZATION_STUDENT_H