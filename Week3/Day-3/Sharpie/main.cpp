#include <iostream>
#include "Sharpie.h"

using namespace std;

int main() {
    Sharpie first;
    cout<<"First Sharpie: "<<first.getUse()<<endl;

    first.use();
    cout<<"Sharpie been used..."<<endl;
    cout<<"Ink remains: "<<first.getUse()<<endl;


    return 0;
}