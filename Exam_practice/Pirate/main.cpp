#include <iostream>
#include "Pirate.h"
#include "Ship.h"

int main() {

    Pirate Bela ("Bela",2);
    Bela.setIsCaptain();
    Pirate Sanyi ("Sanyi",4);
    Sanyi.setHasWoodLeg();

    Ship Beluga;
    Beluga.addCrew(&Bela);
    Beluga.addCrew(&Sanyi);

    vector<string> crewname = Beluga.getPoorPirates();
    cout<<crewname[0]<<endl;
    return 0;
}