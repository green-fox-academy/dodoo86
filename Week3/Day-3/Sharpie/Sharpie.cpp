#include <iostream>
#include <string>
#include "Sharpie.h"

using namespace std;

Sharpie::Sharpie(){
    inkAmount = 100;
}
void Sharpie::use() {
    inkAmount--;
}
int Sharpie::getUse() const {
    return inkAmount;
}




