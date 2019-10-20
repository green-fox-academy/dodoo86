#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H
#include <string>

using namespace std;


class Animal {
public:
    Animal(string name,int age, string gender);
    Animal(string name);
    void eat();
    virtual bool isHungry() = 0;
    string toString();

protected:
    string _name;
    string _gender;
    int _age;
    int _fedTimes;

};


#endif //ZOO_ANIMAL_H
