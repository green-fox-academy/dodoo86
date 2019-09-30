#include <iostream>

using namespace std;

int Pow (int n, int base){
    if (n!=0){
        return(base*Pow(n-1,base));
    }else{
        return 1;
    }
}

int main() {
    int n,base;
    cout << "Enter a number:  " << endl;
    cin>>base;
    cout<<"Enter power value:  "<<endl;
    cin>>n;
    cout<<"Your number is:  "<<Pow(n ,base)<<endl;
    return 0;
}