#include <iostream>
#include <vector>
#include "Lion.h"
#include "Monkey.h"
#include "Elephant.h"
#include "Worker.h"

int main() {
    srand(time(NULL));

    Lion Lion("Bela");
    Monkey Monkey ("Sandor");
    Elephant Elephant ("Istvan");

    vector<Animal*>animals;
    animals.push_back(&Lion);
    animals.push_back(&Monkey);
    animals.push_back(&Elephant);

    Worker Worker ("Karoly",animals);
    for (int i = 0; i < 5 ; ++i) {
        Worker.doDaily();
    }
    cout<<Lion.toString()<<endl;
    cout<<Monkey.toString()<<endl;
    cout<<Elephant.toString()<<endl;

    return 0;
}