#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/
typedef struct {
    char* name;
    float price;
    float weight;
}Sandwich_a;

float total(Sandwich_a sandwich,int amount){
    return amount * sandwich.price;
}

int main() {
    Sandwich_a Hamms = {"Burger",11.f,2.5f};

    printf("%.2f\n",total(Hamms,4));
    return 0;
}