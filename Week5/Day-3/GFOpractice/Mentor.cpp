#include <iostream>
#include "Mentor.h"

Mentor::Mentor(const string &name, int age, const string &gender, const string &level) :
                                                Person(name, age, gender),_level(level) {}
Mentor::Mentor() : Mentor("Jane Doe",30,"female","ntermediate"){}

void Mentor::getGoal() {
    cout<<"My goal is: Educate brilliant junior software developers..."<<endl;
}

void Mentor::introduce() {
    cout<<"Hi, I am "<<_name<<" , a "<<_age<<" ears old "<<_gender<<_level<<" mentor."<<endl;
}