#ifndef ZOO_WORKER_H
#define ZOO_WORKER_H
#include <vector>
#include "Animal.h"

class Worker {
public:
    Worker(string name,vector<Animal*>&Animals);
    Worker(string name);
    void doDaily();

protected:
    string _name;
    vector<Animal*>_animalsToLookAfter;

};


#endif //ZOO_WORKER_H
