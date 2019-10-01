#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H
#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    StringedInstrument(string name, int numberOfStrings);
    virtual string sound() = 0;
    void play() override;

protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
