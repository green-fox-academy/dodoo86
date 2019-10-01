#include "Violin.h"

Violin::Violin():StringedInstrument("Violin",4) {}
Violin::Violin(int numberOfStrings):StringedInstrument("Violin",numberOfStrings){}
string Violin::sound() {
    return "Screech";
}
