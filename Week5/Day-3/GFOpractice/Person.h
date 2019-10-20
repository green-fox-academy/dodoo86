#ifndef GFOPRACTICE_PERSON_H
#define GFOPRACTICE_PERSON_H
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(const string &name, int age, const string &gender);

    virtual void introduce();
    virtual void getGoal();
protected:
    string _name;
    int _age;
    string _gender;


};


#endif //GFOPRACTICE_PERSON_H
