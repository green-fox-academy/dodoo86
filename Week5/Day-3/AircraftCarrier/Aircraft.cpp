#include "Aircraft.h"

Aircraft::Aircraft(int maxAmmo, int ammo, int baseDamage, bool isPriority, const string &type) :
    _maxAmmo(maxAmmo),_ammo(ammo),_baseDamage(baseDamage),_isPriority(isPriority),_type(type) {}

int Aircraft::fight() {
    int allDamage = totalDamage();
    _ammo = 0;
    return allDamage;
}

int Aircraft::needAmmo() {
    return _maxAmmo - _ammo;
}

int Aircraft::refill(int ammoStorage) {

    int ammoTaken = 0;

    while (_ammo < _maxAmmo && ammoStorage > 0){
        _ammo++;
        ammoTaken++;
    }
    return ammoStorage - ammoTaken;
}

string Aircraft ::getType() {
    return _type;
}

string Aircraft ::getStatus() {
    return "Type " + _type + ", Ammo: " + to_string(_ammo) + ", Base Damage: " +
    to_string(_baseDamage) + " , All Damage "+ to_string(totalDamage()) + "/n";
}

bool Aircraft::isPriority() {
    return _isPriority;
}

int Aircraft::totalDamage() {
    return _baseDamage * _ammo;
}