#include <iostream>
#include "Carrier.h"

int main() {
    Carrier c1(13,34);
    Carrier c2;
    Aircraft ar1("F16"),ar2("F35"),ar3("F16");

    c1.add(ar1);
    c1.add(ar2);
    c1.add(ar3);
    c1.fill();
    cout<<c1.getCarrierStatus();
    c1.fight(c2);
    cout<<c1.getCarrierStatus();
    c1.fill();
    cout<<c1.getCarrierStatus();

    return 0;
}