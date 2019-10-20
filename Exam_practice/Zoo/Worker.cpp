#include "Worker.h"

Worker::Worker(string name, vector<Animal*> &Animals) : _name(name), _animalsToLookAfter(Animals) {}

Worker::Worker(string name) : _name(name) {
    _animalsToLookAfter.clear();
}

void Worker::doDaily() {

    for (int i = 0; i < _animalsToLookAfter.size() ; ++i) {
        if (_animalsToLookAfter[i]->isHungry()){
            _animalsToLookAfter[i]->eat();
        }
    }
}
