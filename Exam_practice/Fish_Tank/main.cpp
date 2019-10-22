#include <iostream>
#include "Clownfish.h"
#include "Tang.h"
#include "Kong.h"
#include "Aquarium.h"

int main() {

    Aquarium aquarium;

    Clownfish Clownfish ("bela",2,"red","blue");
    Clownfish.status();
    //Clownfish.feed();
    //Clownfish.status();

    Kong Kong ("Istvan",2,"yellow");
    Kong.status();
    //Kong.feed();
    //Kong.status();

    Tang Tang ("sanyi",4,"red","true");
    Tang.status();
    //Tang.feed();
    //Tang.status();


    aquarium.addFish(&Tang);
    aquarium.addFish(&Clownfish);
    aquarium.addFish(&Kong);

    aquarium.getStatus();
    aquarium.feeding();
    aquarium.getStatus();



    return 0;
}