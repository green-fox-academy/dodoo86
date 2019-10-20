#include <iostream>
#include "Sponsor.h"

Sponsor::Sponsor(const string &name, int age, const string &gender, const string &company) : Person(
                                                name, age, gender), _company(company), _hiredStudents(0) {}

Sponsor::Sponsor(): Sponsor("Jane Doe",30,"female","Google") {}


void Sponsor::hire() {
    _hiredStudents++;
}
void Sponsor::introduce() {
    cout<<"Hi, iam "<<_name<<" a, "<<_age<<" year old "<<_gender<<" who represents "<<_company<< " and hired "<<_hiredStudents<<" students so far."<<endl;
}

void Sponsor::getGoal() {
    cout<<"My goal is to hire brilliant junior software developers..."<<endl;
}