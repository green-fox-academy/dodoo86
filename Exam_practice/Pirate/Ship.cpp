//
// Created by David T Laszlo on 2019. 10. 20..
//
#include <iostream>
#include "Ship.h"

bool Ship::isHasCaptain() const {
    return _hasCaptain;
}

void Ship::setHasCaptain() {
    _hasCaptain = true;
}

void Ship::addCrew(Pirate* pirate) {
    if (pirate->isIsCaptain() && !_hasCaptain){
        _pirates.push_back(pirate);
        setHasCaptain();
    }else if (pirate->isIsCaptain() && _hasCaptain){
        cout<<"Theres only be one captain !!!!"<<endl;
    }else{
        _pirates.push_back(pirate);
    }

}

vector<string> Ship::getPoorPirates() {
    vector<string> poorPirates;
    for (int i = 0; i < _pirates.size() ; ++i) {
        if (_pirates[i]->isHasWoodLeg() && _pirates[i]->getGold() < 15){
            poorPirates.push_back(_pirates[i]->getName());
        }

    }
    return poorPirates;
}

int Ship::getGolds() {
    int sum = 0;
    for (int i = 0; i < _pirates.size() ; ++i) {
        sum += _pirates[i]->getGold();
    }
    return sum;
}

void Ship::lastDayOnTheShip() {
    for (int i = 0; i < _pirates.size() ; ++i) {
        _pirates[i]->party();

    }

}

void Ship::prepareForBattle() {

        for (int i = 0; i < 5; ++i) {
            workOnShip();
    }
    lastDayOnTheShip();
}

void Ship::workOnShip() {
    for (int i = 0; i < _pirates.size() ; ++i) {
        _pirates[i]->work();

    }
}
