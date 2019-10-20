#include "Animal.h"

Animal::Animal(string name, int age, string gender) : _name(name), _age(age), _gender(gender) {
    _fedTimes = 0;
}

Animal::Animal(string name) : _name(name) {
    _age = 1;
    _gender = "Unknown";
    _fedTimes = 0;

}

void Animal::eat() {
    _fedTimes++;
}

string Animal::toString() {
    string toReturn = _name + " is a " + to_string(_age) + " years old " + _gender + " animal and was fed " + to_string(_fedTimes);

    return toReturn;
}
