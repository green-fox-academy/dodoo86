#include <iostream>
using namespace std;

void multiplyByTwo(float *floatPtr){
    *floatPtr *=2;
}
int main(int argc, char* args[]) {

    //POINTER TYPE---------------------------------------------------------
    /*
    int a = 31;
    double b = 432.2;
    string name = "Bob";

    cout<<"The memory address of the int value is : " << &a <<endl;
    cout<<"The memory address of the double value is : " << &b <<endl;
    cout<<"The memory address of the string is : " << &name <<endl;

    */
    //PRINT VALUE---------------------------------------------------------
    /*

    int age = 31;
    int *agePtr;
    agePtr = &age;
    cout<< age<<" is the value for this memory address : "<<agePtr<<endl;

     */
     //CHANGE VALUE -------------------------------------------------------
     /*

     float temperature = 21.3;
     temperature = temperature * 2;
     float *temperPtr;
     temperPtr = &temperature;
     cout << temperature <<endl;

    //OTHER SOLUTION--------------------------------------------------------------
     float temper = 21.3;

    std::cout << "Value of the variable number is: " << temper << std::endl;
    multiplyByTwo(&temper);
    std::cout << "Value of the variable number is: " << temper << std::endl;

    float *floatPtr = &temper;

    multiplyByTwo(floatPtr);
    std::cout << "Value of the variable number is: " << temper << std::endl;

    */
     //ADDING----------------------------------------------------------------------
    /*

     int numa, numb , *ptra , *ptrb, sum=0;
     numa= 20;
     numb= 17;
     ptra = &numa;
     ptrb = &numb;
     sum = *ptra + *ptrb;
     cout<<"Sum of the two number is: "<<sum<<endl;

     */



      return 0;
}