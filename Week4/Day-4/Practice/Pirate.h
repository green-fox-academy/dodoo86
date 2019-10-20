#ifndef PRACTICE_PIRATE_H
#define PRACTICE_PIRATE_H


class Pirate {
public:
    Pirate();

    void drinkSomeRum();
    void howsItGoingMate();
    int getDrunkenness();
    void passOut();
    void wakeUp();
    bool isAwake();
    void die();
    bool isAlive();
    void makeCaptain();
    bool isCaptain();

    void brawl(Pirate* otherPirate);

private:
    int _intoxication;
    bool _alive;
    bool _awake;
    bool _captain;

};

#endif //PRACTICE_PIRATE_H
