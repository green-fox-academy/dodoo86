#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H

#include <string>
using namespace std;


class Instrument {
public:
    Instrument(string name);
    virtual void play()=0;
protected:
    string _name;

};


#endif //INSTRUMENTS_INSTRUMENT_H
