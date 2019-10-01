
#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar():StringedInstrument("Electric Guitar",6) {}
ElectricGuitar::ElectricGuitar(int numberOfString) : StringedInstrument ("Electric Guitar", numberOfString) {}
string ElectricGuitar::sound() {
    return "Twang";
}