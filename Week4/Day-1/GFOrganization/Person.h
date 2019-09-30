#ifndef GFORGANIZATION_PERSON_H
#define GFORGANIZATION_PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string name,int age, string gender);
    void introduce();
    void getGoal();


protected:
    string _name;
    int _age;
    string _gender;


};


#endif //GFORGANIZATION_PERSON_H
