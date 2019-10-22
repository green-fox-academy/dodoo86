#include "Clownfish.h"

Clownfish::Clownfish(string name, int weight, string colour, string colour2) : Fish (name, weight, colour), _colour2(colour2) {}

void Clownfish::feed() {
    _weight ++;

}

void Clownfish::status() {
    cout<< _name + ", weight: " + to_string(_weight) + ", colour: " + _colour + " and " + _colour2<<endl;

}
