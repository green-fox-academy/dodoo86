#include "Student.h"


Student::Student()  {
    _name = "Jane Doe";
    _age = 30;
    _gender = "female";
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}
Student::Student(string name, int age, string gender, string previousOrganization)  {
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganization;
}


void Student::skippedDays(int numberOfDays) {
    _skippedDays = (_skippedDays+= numberOfDays);
}
void Student::introduce(){
    cout << "Hi, I'm" << _name << ", a"<<_age<< "year old "<<_gender<<"from"<<_previousOrganization<<" who skipped"<<_skippedDays<<" days form the course already"<<endl;
}
void Student::getGoal(){
    cout<<"My goal is: Be a junior software developer."<<endl;
}