//COMPUTER--------------------------------------------------------------------
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!
/*
struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer IBM = {4.5,6,64};
    Notebook MAC = {2.4,4,32};

    printf("The IBM has %0.2f Ghz speed,%d GB ram and %d bits\n",IBM.cpu_speed_GHz,IBM.ram_size_GB,IBM.bits);
    printf("The MAC has %0.2f Ghz speed,%d GB ram and %d bits\n",MAC.cpu_speed_GHz,MAC.ram_size_GB,MAC.bits);
    return 0;
}
*/
//SANDWICH----------------------------------------------------------------------------------------------

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
/*
typedef struct {
    char *name;
    float price;
    float weight;
} sandwich_t;

float Get_price(sandwich_t san,float am){
    float final = am * san.price;
return final;
}

int main()
{
sandwich_t Burger = {"BigMac",4.5,6.5};
printf("The final amount of the burger $%0.2f\n",Get_price(Burger,4));
    return 0;
}
*/
//CAR-------------------------------------------------------------------------------------------------
// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level
/*
enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
    enum car_type type;
    double km;
    double gas;
};

char *tostring (enum car_type type){
    switch (type)
    {
        case VOLVO : return "Volvo";
        case TOYOTA : return "Toyota";
        case LAND_ROVER : return "Land Rover";
        case TESLA : return "Tesla";
    }
}
void print_car(struct car au){
    printf("Type: %s\n",tostring(au.type));
    printf("Km: %f\n",au.km);
    if (au.type != TESLA){
        printf("Gas: %f\n\n",au.gas);
    }

}
int main()
{
    struct car auu1 = {VOLVO, 2500, 6.5};
    struct car auu2 = {TESLA,1200,0};
    struct car auu3 = {TOYOTA,666,7.8};

    print_car(auu1);
    print_car(auu3);
    print_car(auu2);
    return 0;
}
*/
//POINTS--------------------------------------------------------------------------

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/
/*
typedef struct point {
    float x;
    float y;
}point_t;

point_t create_point (float x, float y){
    point_t newpoint = {x,y};
    return newpoint;
}

float distance(point_t first,point_t sec){
    float hordis = first.x - sec.x;
    hordis *= hordis;
    float verdis = first.y - sec.y;
    verdis *= verdis;
    float dist = sqrtf(hordis+verdis);
    return dist;

}

int main()
{
    point_t p1 = create_point(1, 1);
    point_t p2 = create_point(1, (float)5.5);
    float dist = distance(p1, p2);
    printf("%.2f", dist);
    return 0;
}
 */
//HOUSE--------------------------------------------------------------------------------------------------
/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/
typedef struct {
    char *address;
    int price;
    int rooms;
    float size;
}House_t, *House_p;

float worth_to_buy (House_p hpp){
    float price_per_sqm = (float)hpp->price/hpp->size;
    return price_per_sqm;
}

int Count_to_buy (House_t *haaz,int numbs){
    int market_price = 400;


    int counter = 0;
    for (int i = 0; i < numbs; ++i) {
        if ((int)worth_to_buy(&haaz[i]) <= market_price){
            counter ++;
        }
    }
    return counter;
}
int main()
{
House_t hazak[] = {
        {"Lipotvaros",65,4,85},
        {"Ujpest",750000000,6,120},
        {"Ujbuda",54000000,2,35}
};
int market_price = 400;
int numberOf_houses = sizeof(hazak)/ sizeof(hazak[0]);
printf("Number of houses worth to buy: %d\n",Count_to_buy(hazak,numberOf_houses));
    return 0;
}