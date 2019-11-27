#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>

//COMPUTER--------------------------------------------------------------------------------------------------------------
/*
// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

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
    struct Computer comp;
    comp.bits = 8;
    comp.ram_size_GB = 4;
    comp.cpu_speed_GHz = 4.5;

    printf("The computer has %d GB ram, and %d bit.. also it is runing on %0.1f Ghz\n", comp.ram_size_GB,comp.bits,comp.cpu_speed_GHz);

    Notebook apple;
    apple.cpu_speed_GHz = 2.5;
    apple.bits = 64;
    apple.ram_size_GB = 2;

    printf("The Notebook has %d GB ram, and %d bit.. also it is runing on %0.1f Ghz\n", apple.ram_size_GB,apple.bits,apple.cpu_speed_GHz);
    return 0;
}
 */

//SANDWICH--------------------------------------------------------------------------------------------------------------

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
typedef struct sandwich{
    char *name;
    float price;
    float weight;
}sandwich_t;

float Get_price(sandwich_t sandwich,float amount){
    float finalPrice = sandwich.price * amount;
    return finalPrice;
}
int main()
{
    sandwich_t Hams = {"Cheese Burger",2.5,4};
    printf("The final price is %0.1f $ \n", Get_price(Hams,3));
    return 0;
}
 */
//CARS------------------------------------------------------------------------------------------------------------------
/*
// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
    enum car_type type;
    double km;
    double gas;
};

char *tostring (enum car_type type)
{
    switch(type)
    {
        case VOLVO : return "Volvo";
        case TOYOTA : return "Toyota";
        case LAND_ROVER : return "Land Rover";
        case TESLA : return "Tesla";
    }
}

void getStats(struct car car){

    printf("Car type %s\n",tostring(car.type));
    printf("Car km %0.1f\n",car.km);
    if (car.type != TESLA){
        printf("Gas usage %0.1f\n\n",car.gas);
    }
}

int main()
{
struct car autoo = {VOLVO,5,34};
struct car autooo = {TESLA,87,4};

getStats(autoo);
getStats(autooo);
    return 0;
}

 */

//POINTS----------------------------------------------------------------------------------------------------------------

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
*/
/*
 typedef struct point {
     float x;
     float y;
 }point_t;

 point_t create_point (float x,float y){
     point_t newpoint = {x,y};
     return newpoint;
 }

 float distance(point_t first,point_t secont){
     float hordis = first.x - secont.x;
     hordis *= hordis;
     float verdis = first.y - secont.y;
     verdis *= verdis;
     float dist = sqrtf(hordis+verdis);
     return dist;
 }
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%0.2f", dist);
	return 0;
}

*/
//HOUSE-----------------------------------------------------------------------------------------------------------------

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
/*
typedef struct house{
    char *Address;
    int price;
    int rooms;
    float size;
}house_t, *house_p;

bool worth_to_buy (house_p hpp, int mp){
    float price_per_sqm = hpp->price / hpp->size;
    return price_per_sqm < mp;
}
int main()
{
    house_t house1 = {"Lipotvaros",343,5,120};
    house_t house2 = {"Istenhegy",12500000,7,180};
    house_t house3 = {"Erzsebetvaros",2505000,7,180};

    int market_price = 400;
    house_t houses[3] = {house1,house2,house3};
    int num_of_houses = sizeof(houses) / sizeof(houses[0]);
    int count_of_whorthit = 0;

    for (int i = 0; i < num_of_houses; ++i) {
        if (worth_to_buy(&houses[i],market_price)){
            count_of_whorthit++;
        }
    }
    printf("%d houses worth to buy ",count_of_whorthit);

    return 0;
}

*/
//CAR_REGISTER----------------------------------------------------------------------------------------------------------

/* Write a car register!
  You should store the following data in a structure, called "car":
   - the manufacturer's name (which is shorter than 256 characters)
   - the price of the car (in euros, stored as a floating point number)
   - the year of manufacture
   - the type of the transmission (as a custom type, see below)

  You should store the transmission type in an enumeration ("transmission"),
  the valid types are:
   - manual
   - automatic
   - CVT
   - semi-automatic
   - dual-clutch

  The "car"-s are stored in an array.

  Write the following functions:
   - get_older_cars_than(struct car* array, int array_length, int age)
       - it returns the count of the older cars than "age"
   - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
       - it returns the count of cars which has "trnsm" transmission
 */
/*
typedef enum transmission {
    manual,
    automatic,
    CVT,
    semi_automatic,
    dual_clutch
}transmission_t;

typedef struct car{
    char *manufacturer;
    float price;
    int year;
    transmission_t trnsm;
}car_t;

int get_older_cars_than(struct car* autoo, int array_length, int age){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (autoo->year < age){
            counter++;
        }
    }return counter;
}

int get_transmission_count(struct car* autoo, int array_length, transmission_t trnsm){
    int count = 0;
    for (int i = 0; i < array_length; ++i) {
        if (autoo[i].trnsm == trnsm){
            count++;
        }
    }return count;
}

int main() {

    struct car autoo[] = {
            {"Audi", 1200000, 2011, manual},
            {"Seat", 450000,  2006, manual},
            {"Tesla",5647733,2019,automatic},
            {"BMW",6500000,2005,CVT},
    };

    int array_length = sizeof(autoo)/ sizeof(autoo[0]);

    printf("Cars older than 5 years %d\n",get_older_cars_than(autoo,array_length,2016));
    printf("There is %d manual transmission cars in the array\n",get_transmission_count(autoo,array_length,manual));



    return 0;
}

*/
//DIGIMON---------------------------------------------------------------------------------------------------------------

typedef enum evolution_level{
    baby,
    in_training,
    rookie,
    champion,
    ultimate,
    mega
}evolution_level_t;

 struct digimon{
    char *name;
    int age;
    int health;
    char *tamename;
    evolution_level_t level;
};

int get_minimum_health(struct digimon *digi,int size){

    int minhealth = digi[0].health;
    int minhealindex = 0;
    for (int i = 0; i < size; ++i) {
        if(digi[i].health < minhealth){
            minhealth = digi[i].health;
            minhealindex = i;
        }
    }return minhealindex;
}

int same_digivolution_level_count (struct digimon *digi, int size, evolution_level_t level){
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if(digi[i].level == level){
            count++;
        }
    }return count;
}

int get_same_tamer(struct digimon *digi,int size,const char *tamename){
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if(digi[i].tamename == tamename){
            count++;
        }
    }
    return count;
}

float average_health(struct digimon *digi,int size,const char *tamename) {
    int count = 0;
    float avrg = 0;
    for (int i = 0; i < size; ++i) {
        if (digi[i].tamename == tamename) {
            count++;
            avrg += (float) digi[i].health;
        }
    }
    return avrg / (float)count;
}
int main(){


    struct digimon digi[] = {
            {"Bela",11,85,"Karoly",champion},
            {"Sandor",55,32,"Levi",champion},
            {"Tibi",9,54,"Csabi",baby},
            {"Balint",33,18,"Levi",champion},
    };

    int size = sizeof(digi)/ sizeof(digi[0]);

    printf("The digimon who has the lowest healt is the %d-th, in the array\n", get_minimum_health(digi,size));
    printf("There is %d same leveled Digimon in the array\n ",same_digivolution_level_count(digi,size,champion));
    printf("There is %d digimon with tamer Levi\n",get_same_tamer(digi,size,"Levi"));
    printf("The average is %0.2f\n",average_health(digi,size,"Levi"));
    return 0;
}


