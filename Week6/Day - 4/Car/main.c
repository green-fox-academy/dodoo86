#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
    enum car_type type;
    double km;
    double gas;
};

char *tostring(enum car_type type){
    switch (type){
        case VOLVO:
            return "Volvo";
        case TOYOTA:
            return "Toyota";
        case LAND_ROVER:
            return "Land Rover";
        case TESLA:
            return "Tesla";
        default:
            return "Undefined";
    }
}

void print_stats(struct car aut){

    printf("\n");
    printf("Type: %s\n",tostring(aut.type));
    if (aut.type != TESLA) {
        printf("Gas: %.2f\n", aut.gas);
    }
    printf("Km: %.2f\n",aut.km);

}

int main()
{
    struct car auto1 = {VOLVO,224,420};
    struct car auto2 = {TESLA,444};
    struct car auto3 = {TOYOTA,666,546};

    print_stats(auto1);
    print_stats(auto2);
    print_stats(auto3);
    return 0;
}

