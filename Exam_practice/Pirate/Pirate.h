#ifndef PIRATE_PIRATE_H
#define PIRATE_PIRATE_H
#include <string>

using namespace std;

class Pirate {
public:
    Pirate(string name, int gold);
    void work();
    void party();
    bool isIsCaptain() const;
    void setIsCaptain();
    bool isHasWoodLeg() const;
    void setHasWoodLeg();
    string toString();

    int getGold() const;

    const string &getName() const;

protected:
    string _name;
    int _gold;
    int _health;
    bool _isCaptain;
    bool _hasWoodLeg;



};


#endif //PIRATE_PIRATE_H
