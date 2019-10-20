#include "Lion.h"

bool Lion::isHungry() {
    return true;
}

Lion::Lion(string name, int age, string gender) : Animal(name, age, gender) {

}

Lion::Lion(string name) : Animal(name) {

}
