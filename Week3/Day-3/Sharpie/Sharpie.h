#include <iostream>
#include <string>

using namespace std;

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


class Sharpie {
public:
    Sharpie();
    string colour;
    float width;
    void use();
    int inkAmount;
    int getUse() const;



};


#endif //SHARPIE_SHARPIE_H
