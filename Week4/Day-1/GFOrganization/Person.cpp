#include <iostream>
#include <string>
#include "Person.h"



Person::Person()  {
    _name = "Jane Doe";
    _age = 30;
    _gender = "female";
}

Person::Person(string name, int age, string gender): _name(name), _age(age), _gender(gender) {

}

void Person::introduce() {
    cout << "Hi, I'm" << _name << ", a"<<_age<< "year old "<<_gender<<endl;
}

void Person::getGoal(){
    cout<<"My goal is: Live for the moment!"<<endl;
}
