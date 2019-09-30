#include "Mentor.h"

Mentor::Mentor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = "female";
    _level = "Intermediate";

}
void Mentor::getGoal() {
    cout<<"My goal is: Educate brilliant junior software developers."<<endl;
}

void Mentor::introduce() {
    cout<<"Hi, I'm "<<_name<<" , a "<<_age<<" year old "<<_gender<< _level<<" mentor."<<endl;
}
