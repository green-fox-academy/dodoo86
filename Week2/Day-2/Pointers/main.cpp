#include <iostream>
using namespace std;

void multiplyByTwo(float *floatPtr){
    *floatPtr *=2;
}
void swap(int *ptra, int *ptrb);

int findmax(int a[],int n);
int minimum (int numbers[],int x);

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
    //FIND MINIMUM----------------------------------------------------------------------------------
    /*

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    cout << *numbers << endl;

    return 0;
}
int minimum (int numbers[],int x){

    int i,min;
    min=numbers[0];
    for (i=1;i <x ; i++ )
    {
        if (numbers[i]<min)
            min=numbers[i];
    }
    return min;
}

    */
    //SWAP-------------------------------------------------------------------------------
    /*
   int a = 10;
   int b = 316;
   int *ptra = &a;
   int *ptrb = &b;

   swap(ptra,ptrb);

   cout<< "A equal: "<<a<<" , "<<"B equal:"<<b<<endl;



   return 0;
}

void swap(int *ptra, int *ptrb)
{
   int temp;
   int *ptrtemp = &temp;
   *ptrtemp = *ptra;
   *ptra = *ptrb;
   *ptrb = *ptrtemp;
}

    */
    //PRINT ADDRESSES-----------------------------------------------------------------------
    /*

    int array[5];
    int x = 5;
    cout<<"Give me five numbers: "<<endl;

    for(int i=0;i<x;++i){
        cin>>array[i];
    }
    int *ptrtox=array;
    for (int y=0;y<sizeof(array)/sizeof(array[0]);++y){
        cout<<"The memory address of the numbers:  "<<ptrtox + y<<endl;
    }

    */
    //FIVE NUMBERS----------------------------------------------------------------
    /*
    int array[5];
    int x = 5;
    cout<<"Give me five numbers: "<<endl;

    for(int i=0;i<x;++i){
        cin>>array[i];
    }
    int *ptrtox=array;
    for (int y=0;y<sizeof(array)/sizeof(array[0]);++y){
        cout<<"The value of the numbers:  "<<ptrtox[y]<<endl;
    }

    */
    //LOOK FOR VALUE---------------------------------------------------------------
    /*
    int Array[5], number,size;

    size=5;


    cout<<"Give me five numbers...."<<endl;
    for (int i=0;i<size; i++){
        cin>>Array[i];
    }

    cout<<"The number you are looking for ?  :"<<endl;
    cin>>number;

    int j = 0;
    for(j=0;j<size;++j){
        if(Array[j]==number){
            break;
        }
    }
    if(j<size){
        cout<< number <<" Is "<< j <<". in the array"<<endl;
    } else{
        cout<<"cant find"<<endl;
    }

    */
    //LOOK FOR MAXIMUM-------------------------------------------------------
    /*

    int array[57],max,size;

    cout<<"Enter the numbers of element"<<endl;
    cin>>size;

    cout<<"Enter elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    max=findmax(array,size);
    int *maxPtr=&max;



        cout<<"The largest element is:  "<<maxPtr<< "it is:" << max<<endl;



     return 0;
}
    int findmax(int a[],int n){

    int i,max;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
       return max;

}
    */

    return 0;
}
