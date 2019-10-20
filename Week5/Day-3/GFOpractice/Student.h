#ifndef GFOPRACTICE_STUDENT_H
#define GFOPRACTICE_STUDENT_H


#include "Person.h"

class Student : public Person {
public:
    Student();

    Student(const string &name, int age, const string &gender, const string &previousOrganization);

    void skippedDays(int numberOfDays);
    virtual void introduce() override;
    virtual void getGoal() override;

protected:
    string _previousOrganization;
    int _skippedDays;
    int _numberOfDays;
};


#endif //GFOPRACTICE_STUDENT_H
