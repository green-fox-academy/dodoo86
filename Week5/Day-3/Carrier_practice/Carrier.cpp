#include "Carrier.h"

Carrier::Carrier() : _hp(134), _carrierAmmo(433), _totalDamage(0) {}

Carrier::Carrier(int initAmmo, int health ) : _hp(health), _carrierAmmo(initAmmo), _totalDamage(0) {}

void Carrier::add(Aircraft Unit) {
    _airCrafts.push_back(Unit);
}

int Carrier::fill() {
    int remainingAmmo;
    for (int i = 0; i < _airCrafts.size(); ++i) {
       remainingAmmo = _airCrafts[i].refillAmmo(_carrierAmmo);
        _carrierAmmo = remainingAmmo;
    }
    return 0;
}

bool Carrier::isEnoughAmmo() {
    return false;
}

void Carrier::fight(Carrier &opponentCar) {
        updateTotalDamage();
    for (int i = 0; i < _airCrafts.size(); ++i) {
        _airCrafts[i].fight();
    }
    opponentCar._hp -= _totalDamage;
    updateTotalDamage();
}
void Carrier::updateTotalDamage() {
    int tmpTotalDamage = 0;
    for (int i = 0; i < _airCrafts.size(); ++i) {
        tmpTotalDamage += _airCrafts[i].getAmmo()*_airCrafts[i].getBaseDamage();
    }
    _totalDamage =  tmpTotalDamage;
}

string Carrier::getCarrierStatus() {
    if(_hp<= 0){
        return "Its dead Jim";
    }
    string result;

    result = "HP " + to_string(_hp )+ " Aircraft Count : " + to_string( _airCrafts.size()) + " Total Damage "
                                                                + to_string( _totalDamage)+"\nAircraft: \n";

    for (int i = 0; i < _airCrafts.size(); ++i) {
        result += "Type " + _airCrafts[i].getType() + " Ammo "+ to_string(_airCrafts[i].getAmmo())
                    + " Base Damage " + to_string(_airCrafts[i].getBaseDamage())
                    + " All Damage "+ to_string(_airCrafts[i].getAmmo()*_airCrafts[i].getBaseDamage())+"\n";

    }



    return result;
}


