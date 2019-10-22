#include "Aquarium.h"

void Aquarium::feeding() {
    for (int i = 0; i < _fishes.size(); ++i) {
        _fishes[i]->feed();
    }
}

void Aquarium::addFish(Fish* fishes) {
    _fishes.push_back(fishes);
}

void Aquarium::removeFish() {
    for (int i = 0; i < _fishes.size() ; ++i) {
        if (_fishes[i]->getWeight() >= 11)
            _fishes.erase(_fishes.begin()+i);
            i--;
    }
}

void Aquarium::getStatus() {
    for (int i = 0; i < _fishes.size(); ++i) {
        _fishes[i]->status();
    }
}

Aquarium::Aquarium() {

}
