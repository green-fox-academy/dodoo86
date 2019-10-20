#include <iostream>
#include "Student.h"


Student::Student(const string &name, int age, const string &gender, const string &previousOrganization) :
                                Person(name, age, gender), _previousOrganization(previousOrganization) {}

Student::Student() : Student("Jane Doe",30,"female","The School of Life"){}

void Student::skippedDays(int numberOfDays) {
    _skippedDays = (_skippedDays+=numberOfDays);
}

void Student::introduce() {
    cout<< "Hi, Iam" <<_name<<", a "<<_age<<" years old"<<_gender<<" from "<<_previousOrganization<<endl;
}

void Student::getGoal() {
    cout<<"My goal is to become a junior software programer..."<<endl;
}