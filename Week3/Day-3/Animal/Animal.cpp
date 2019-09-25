#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

animal::animal() {
    hunger = 50;
    thirst = 50;
}
void animal::eat() {
    hunger--;
}
void animal::drink() {
    thirst--;
}
void animal::play() {
    thirst++;
    hunger++;
}

int animal::getHunger() const {
    return hunger;
}
int animal::getThirst() const{
    return thirst;
}