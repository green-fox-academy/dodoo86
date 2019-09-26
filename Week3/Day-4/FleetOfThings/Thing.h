#ifndef FLEETOFTHINGS_THING_H
#define FLEETOFTHINGS_THING_H


#include <string>

class Thing
{
public:
    Thing(const std::string& name);

    void complete();
    std::string toString();

private:
    std::string _name;
    bool _completed;
};


#endif //FLEETOFTHINGS_THING_H
