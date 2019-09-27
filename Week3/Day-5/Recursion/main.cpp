#include <iostream>

using namespace std;

 int factorial(int num){
    if(num < 1){
        return 0;
    }else {
        int a = num + factorial(num - 1);
        return a;
    }
}
int main(){
    cout<< factorial(8)<<endl;
    return 0;
}