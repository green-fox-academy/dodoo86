#include "Elephant.h"

bool Elephant::isHungry() {
    static int counter;
    counter++;
    return counter%2;
}

Elephant::Elephant(string name, int age, string gender) : Animal(name, age, gender) {

}

Elephant::Elephant(string name) : Animal(name) {

}
