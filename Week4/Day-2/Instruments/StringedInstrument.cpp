#include <iostream>
#include "StringedInstrument.h"
using namespace std;

StringedInstrument::StringedInstrument(string name, int numberOfStrings) : Instrument(name),
                                                                                  _numberOfStrings(numberOfStrings) {}
void StringedInstrument::play() {
    cout<< _name <<", a "<< _numberOfStrings <<"-stringed instrument that goes "<< sound() <<endl;
}