#ifndef PRACTICE_SHIP_H
#define PRACTICE_SHIP_H


#include <vector>
#include "Pirate.h"

class Ship {
public:
    Ship();
    explicit Ship(std::string);

    void printStatus();
    void fillShip();
    bool hasCaptain();
    void makeCaptain();
    int getCapacity();
    int getCrewSize();
    bool hasAvailableCrew();
    void throwOutTheDead();

    bool battle(Ship* otherShip);

private:
    std::string getCaptainStatus();
    std::pair<int,int> getCrewStatus();

    std::vector<Pirate*> _crew;
    bool _captain;
    int _capacity;
    std::string _name;
};



#endif //PRACTICE_SHIP_H
