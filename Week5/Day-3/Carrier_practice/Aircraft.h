#ifndef CARRIER_PRACTICE_AIRCRAFT_H
#define CARRIER_PRACTICE_AIRCRAFT_H

#include <string>

using namespace std;
class Aircraft {
public:
    Aircraft(string _type);
    int fight();
    int refillAmmo(int ammo);
    string getType();
    string getStatus();
    bool isPriority();
    int getAmmo();
    int getBaseDamage();

protected:
    int _maxAmmo;
    int _baseDamage;
    int _ammo;
    string _type;





};


#endif //CARRIER_PRACTICE_AIRCRAFT_H
