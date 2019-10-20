#ifndef PIRATE_SHIP_H
#define PIRATE_SHIP_H
#include <vector>
#include "Pirate.h"

class Ship  {
public:
    vector<Pirate*> _pirates;
    bool isHasCaptain() const;
    void setHasCaptain();
    void addCrew(Pirate*);
    vector<string> getPoorPirates();
    int getGolds();
    void lastDayOnTheShip();
    void prepareForBattle();
    void workOnShip();

protected:
    bool _hasCaptain;

};


#endif //PIRATE_SHIP_H
