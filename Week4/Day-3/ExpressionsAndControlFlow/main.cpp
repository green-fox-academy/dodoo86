#include <iostream>
using namespace std;


//BMI---------------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;
    double BMI;
    BMI = massInKg + heightInM * 2;

    cout<< "The BMI is : "<<BMI<<endl;


    // Print the Body mass index (BMI) based on these values

    return 0;
}
 */

//DEFINE BASIC INFO---------------------------------------------------------------------

/*
int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    string name = "David T Laszlo";
    int age = 33;
    double height = 1.92;
    bool married = 0;

    cout<<"Hi, my name is "<<name<<" , i am "<<age<<" years old, and "<<height<<" meter height"<<" ,and my marrial status is: "<<married<<endl;

    return 0;
}
 */

//VARIABLE MUTATION-------------------------------------------------------------------------

/*

int main(int argc, char* args[]) {

    int a = 3;
    a = a+10;

    std::cout << a << std::endl;

    int b = 100;
    // make b smaller by 7
    b= b-7;
    std::cout << b << std::endl;

    int c = 44;
    // please double c's value
    c = c*2;
    std::cout << c << std::endl;

    int d = 125;
    // please divide by 5 d's value
    d = d / 5;
    std::cout << d << std::endl;

    int e = 8;
    // please cube of e's value
    e = e * 3;
    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)
    cout<<(f1>f2)<<endl;
    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)
    cout<<(g2*2>g1)<<endl;
    int h = 135798745;
    bool ac;
    // tell if it has 11 as a divisor (print as a boolean)
    ac = h / 11;
    cout<<"Divisor thingy: "<<ac<<endl;
    int i1 = 10;
    int i2 = 4;
    bool ca;
    bool cb;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)
    cb = i1>i2*3;
    ca = i1>i2*2;
    cout<<"first is: "<<ca<<" Second is: "<<cb<<endl;
    int j = 1521;
    bool aa;
    bool bb;
    // tell if j is dividable by 3 or 5 (print as a boolean)
    aa = j / 3;
    bb = j / 5;
    cout<<j<<" Is dividable by 3?: "<<aa<<" Or dividable by 5?: "<<bb<<endl;
    return 0;
}
*/

//CUBOID----------------------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    double cubeA;
    cubeA = 8;
    double volume;
    double Surface;
    volume = cubeA*3;
    Surface = 6 * (cubeA*2);
    cout<<"Volume: "<<volume<<endl;
    cout<<"Surface Area: "<<Surface<<endl;
    return 0;
}
 */

//SECONDS IN A DAY-------------------------------------------------------------------------------

/*
int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int secRemain = 60 - currentSeconds;
    int minRemain = (120 - currentMinutes)*60;
    int hourRemain = ((23 - currentHours)*60)*60;

    cout<<secRemain + minRemain + hourRemain<<" : Second remains from today."<<endl;
    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    return 0;
}
 */

//ANIMALS AND LEGS---------------------------------------------------------------------------------

/*
int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chick;
    int pig;
    cout <<"How many chickens: "<<endl;
    cin>>chick;
    cout<< "How many pigs: "<<endl;
    cin>>pig;
    cout<< chick*2 + pig*4 << " animal legs on the farm."<<endl;


    return 0;
}
*/

//AVARAGE OF INPUT------------------------------------------------------------

/*
int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int first;
    int second;
    int third;
    int fourth;
    int fifth;
    cout<<"Give me five numbers: "<<endl;
    cin>>first;
    cin>>second;
    cin>>third;
    cin>>fourth;
    cin>>fifth;
    int summ = first+second+third+fourth+fifth;
    float avrg = (first+second+third+fourth+fifth)/5;

    cout<<"Sum: "<<summ<<", Average: "<<avrg<<endl;


    return 0;
}
 */
//PRINT BIGGER ---------------------------------------------------------------------------

/*
int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one
    int a;
    int b;
    cout<<"Give me two number..."<<endl;
    cin>>a;
    cin>>b;
    if (a > b){
        cout<<a;
    }else{
            cout<<b<<endl;
        }
    return 0;
}
 */

//CONDITIONAL VARIABLE MUTATION -----------------------------------------------------------------------

/*
int main(int argc, char* args[]) {

    int a = 24;
    int out = 0;
    // if a is even increment out by one
    if (a % 2 == 0) {
        out++;


        std::cout << out << std::endl;
    }

    int b = 45;
    std::string out2 = "";
    // if b is between 10 and 20 set out2 to "Sweet!"
    // if less than 10 set out2 to "Less!",
    // if more than 20 set out2 to "More!"
    if (10<b && b<20) {
        out2 ="Sweet";
    }else if (10>b){
        out2 = "Less";
    }else
        out2 = "More";

    std::cout << out2 << std::endl;

    int c = 123;
    int credits = 65;
    bool isBonus = false;
    // if credits are at least 50,
    // and isBonus is false decrement c by 2
    // if credits are smaller than 50,
    // and isBonus is false decrement c by 1
    // if isBonus is true c should remain the same
    if (credits >= 50 && isBonus == false){
        c = c-2;
    }else if (credits < 50 && isBonus ==false){
        c = c-1;
    }else if (isBonus == true){

    }

    std::cout << c << std::endl;


    int d = 8;
    int time = 200;
    std::string out3 = "";
    // if d is dividable by 4
    // and time is not more than 200
    // set out3 to "check"
    // if time is more than 200
    // set out3 to "Time out"
    // otherwise set out3 to "Run Forest Run!"
    if (d%4==0 && time<200){
        out3 = "check";
    }else if (time>200){
        out3 = "Time out";
    }else
        out3 = "Run Forest Run!!!";

    std::cout << out3 << std::endl;

    return 0;
}
 */

//FIZZBUZZ------------------------------------------------------------------------------------
/*

int main(int argc, char* args[]) {
    // Write a program that prints the numbers from 1 to 100.
    // But for multiples of three print “Fizz” instead of the number
    // and for the multiples of five print “Buzz”.
    // For numbers which are multiples of both three and five print “FizzBuzz”.
    int a;
    string out3;
    for (a = 0;a < 100; a++)
        if (a%3==0){
            cout<<"Fizz"<<endl;
        }else if (a%5==0){
            cout<<"Buzz"<<endl;
        } else
            cout<<a<<endl;
    return 0;
}
 */
//DRAW PYRAMID-----------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int rows,space;
    int starnum;

    cout<<"Give me a number"<<endl;
    cin>>rows;
    for (int i=0;i<rows;++i){
        starnum +=2;
        for ( space = 0; space < rows-i; ++ space) {
            cout << " ";
        }
        for (int j = 0; j < i*2+1; ++j){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
 */

//


int main(int argc, char* args[]) {
    int rows,space;
    int starnump;
    int starnumm;

    cout<<"Give me a number"<<endl;
    cin>>rows;
        for (int i=0;i<rows;++i) {
            starnump += 2;
            for (space = 0; space < rows - i; ++space) {
                cout << " ";
            }
            for (int j = 0; j < i * 2 + 1; ++j) {
                cout << "*";
            }

            cout << endl;
        }
return 0;
}