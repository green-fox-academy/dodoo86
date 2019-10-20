#ifndef AIRCRAFTCARRIER_AIRCRAFT_H
#define AIRCRAFTCARRIER_AIRCRAFT_H
#include <string>

using namespace std;

class Aircraft {
public:
    Aircraft();

    Aircraft(int maxAmmo, int ammo, int baseDamage, bool isPriority, const string &type);

    int fight();
    int needAmmo();
    int refill(int);
    string getType();
    string getStatus();
    bool isPriority();
    int totalDamage();

protected:
    int _maxAmmo;
    int _ammo;
    int _baseDamage;
    bool _isPriority;
    string _type;

};


#endif //AIRCRAFTCARRIER_AIRCRAFT_H
