#include "Mentor.h"

Mentor::Mentor(string name, int age, string gender, string level) : Person(name, age, gender), _level(level) {}
Mentor::Mentor() : Mentor("Jane Doe", 30, "female","intermediate") {}

void Mentor::getGoal() {
    cout<<"My goal is: Educate brilliant junior software developers."<<endl;
}

void Mentor::introduce() {
    cout<<"Hi, I'm "<<_name<<" , a "<<_age<<" year old "<<_gender<< _level<<" mentor."<<endl;
}