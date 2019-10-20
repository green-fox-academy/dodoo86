#include "Monkey.h"

bool Monkey::isHungry() {
    return rand()%2;
}

Monkey::Monkey(string name, int age, string gender) : Animal(name, age, gender) {

}

Monkey::Monkey(string name) : Animal(name) {

}
