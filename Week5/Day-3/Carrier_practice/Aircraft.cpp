#include "Aircraft.h"
#include <iostream>

Aircraft ::Aircraft(string typeAircraft) {

    _type = typeAircraft;
    if (_type == "F16") {
        _maxAmmo = 8;
        _baseDamage = 30;
    }else if (_type == "F35"){
        _maxAmmo = 12;
        _baseDamage = 50;
    }else {
        _type = "F16";
        _maxAmmo = 0;
        _baseDamage = 0;
        cout<<"Try again!!!"<<endl;
    }
}

int Aircraft::fight() {
    int totalDamage = _baseDamage * _ammo;
    _ammo = 0;
    return totalDamage;
}

int Aircraft::refillAmmo(int fillerAmmo) {
    int neededAmmo = _maxAmmo - _ammo;
     if(neededAmmo <= fillerAmmo ){
         _ammo += neededAmmo;
         fillerAmmo -= neededAmmo;
         return fillerAmmo;
     }else{
         _ammo += fillerAmmo;
         return 0;
     }

}

string Aircraft::getType() {

    return _type;
}

string Aircraft::getStatus() {

    return string("Type " + _type + " Ammo " + to_string( _ammo) + " Base Damage" + to_string(_baseDamage )
                                                       + "All Damage" + to_string(_ammo * _baseDamage));
}

bool Aircraft::isPriority() {
    if (_type == "F16"){
        return false;
    }
    return true;
}
int Aircraft::getAmmo() {
    return _ammo;
}

int Aircraft::getBaseDamage() {
    return _baseDamage;
}
