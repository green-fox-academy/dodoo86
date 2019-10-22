#include "Kong.h"

Kong::Kong(string name, int weight, string colour) : Fish(name, weight, colour) {

}

void Kong::feed() {
    _weight += 2;
}

void Kong::status() {
    cout << _name + ", weight: " + to_string(_weight) + ", colour: " + _colour <<endl;
}
