#include <iostream>
#include "Person.h"



Person::Person(const string &name, int age, const string &gender) : _name(name), _age(age), _gender(gender) {}
Person::Person(): Person ("Jane Doe", 30,"felmale"){}

void Person::introduce() {
    cout<< "Hi, I am "<< _name << ", a"<< _age <<" years old "<<_gender<<endl;
}
void Person::getGoal() {
    cout<<" My goal is world domination..."<<endl;
}