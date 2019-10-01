#include <iostream>
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Animal.h"

int main( int argc, char* args[] )
{
    Reptile reptile("Crocodile");
    Mammal mammal("Koala");
    Bird bird("Parrot");

    cout << "How do you breed?" << endl;
    cout << "A " << reptile.getName() << " is breeding by " << reptile.breed() << endl;
    cout << "A " << mammal.getName() << " is breeding by " << mammal.breed() << endl;
    cout << "A " << bird.getName() << " is breeding by " << bird.breed() << endl;
}