#include <iostream>
#include "Animal.h"


int main() {

    animal first;
    cout<<"Hunger: "<<first.getHunger()<<endl;
    cout<<"Thirst: "<<first.getThirst()<<endl;

    first.eat();
    cout<<"animal eats"<<endl;
    cout<<"Hunger: "<<first.getHunger()<<endl;
    cout<<"Thirst: "<<first.getThirst()<<endl;

    first.drink();
    cout<<"animal drinks"<<endl;
    cout<<"Hunger: "<<first.getHunger()<<endl;
    cout<<"Thirst: "<<first.getThirst()<<endl;

    first.play();
    cout<<"animal plays"<<endl;
    cout<<"Hunger: "<<first.getHunger()<<endl;
    cout<<"Thirst: "<<first.getThirst()<<endl;

    return 0;
}