#include <iostream>

using namespace std;


    int sumDigits(int n){
        if(n<1){
            return 0;
        }else{
            int sum = 0;
            sum = sumDigits(n/10) + n%10;
            return sum;
        }

    }


int main(){
    int n;
    cout<<"Give me a number:   "<<endl;
    cin>>n;
    cout<<"The sum of your number is :   "<<sumDigits(n)<<endl;
    return 0;
}