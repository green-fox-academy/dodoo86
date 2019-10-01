#include "BassGuitar.h"

BassGuitar::BassGuitar():StringedInstrument("Bass Guitar",4) {}
BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument ("Bass Guitar",numberOfStrings) {}
string BassGuitar::sound() {
    return "Duum-duum-duum";
}
