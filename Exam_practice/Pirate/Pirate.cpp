#include "Pirate.h"
#include <string>
using namespace std;

Pirate::Pirate(string name, int gold) : _name(name), _gold(gold){
    _health = 10;
    _isCaptain = false;
    _hasWoodLeg = false;

}

bool Pirate::isIsCaptain() const {
    return _isCaptain;
}

void Pirate::setIsCaptain() {
    _isCaptain = true;
}

bool Pirate::isHasWoodLeg() const {
    return _hasWoodLeg;
}

void Pirate::setHasWoodLeg() {
    _hasWoodLeg = true;
}

void Pirate::work() {
    if (_isCaptain){
        _gold += 10;
        _health -= 5;
    }else{
        _gold += 1;
        _health -=1;
    }

}

void Pirate::party() {
    if (_isCaptain){
        _health += 10;
    }else{
        _health += 1;
    }

}

string Pirate::toString() {
    string toString = "Hello i am " + _name;
    if  (_hasWoodLeg){
        toString += " I have a wooden leg. ";
    }else{
        toString += " i have my real leggs ";
    }
    toString += " and i have " + to_string(_gold) + " golds.";
    return toString;
}

int Pirate::getGold() const {
    return _gold;
}

const string &Pirate::getName() const {
    return _name;
}




