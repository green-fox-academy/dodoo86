#ifndef CARRIER_PRACTICE_CARRIER_H
#define CARRIER_PRACTICE_CARRIER_H

#include <vector>
#include "Aircraft.h"

class Carrier {
public:
    Carrier();
    Carrier(int initAmmo, int health);
    void add(Aircraft);
    int fill();
    bool isEnoughAmmo();
    void fight(Carrier&);
    string getCarrierStatus();
    void updateTotalDamage();


protected:
    vector<Aircraft> _airCrafts;
    int _carrierAmmo;
    int _hp;
    int _totalDamage;
};


#endif //CARRIER_PRACTICE_CARRIER_H
