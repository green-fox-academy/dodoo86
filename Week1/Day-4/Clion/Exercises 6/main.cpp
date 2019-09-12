#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* args[]) {

    //int number;
    //cout << "Give me a number..." << endl;
    //cin >> number;
    //if (number <= 0) {
    //cout << "Not enough";
    //}else if (number == 1) {
    //cout << "One" << endl;
    //}else if (number == 2) {
    //cout << "Two" << endl;
    //}else
    //cout << "Too much" << endl;

    //int girls;
    //int boys;
    //cout << "How many girls ?" << endl;
    //cin >> girls;
    //cout << "How many boys ?" << endl;
    //cin >> boys;

    //if(girls != 0){
    //if (girls == boys && girls + boys >= 20){
    // cout << "The party is excellent !!!" << endl;
    //}
    //else if (girls != boys && girls + boys >= 20){
    //cout << "Quite cool party" << endl;
    //}
    //else if (girls + boys < 20){
    //cout << "Average party" << endl;
    //}
    //}
    //else {
    //cout <<"Sausage party" << endl;
    //}

    //int name;
    //for (name=1;name<=100;++name)
    //cout<<"David Laszlo"<<endl;


    //int even;

    //for (even=1;even<=500;++even){
    //if(even%2==0)
    //cout<<even<<endl;
    //}

    //int numbera;
    //int numberb;

    //cout<<"Give me a number..."<<endl;

    //cin>>numbera;

    //for (numberb=1;numberb<=10;++numberb) {
    //cout << numberb << " * " << numbera << " = " <<numberb * numbera << endl;
    //}
/*
        int numbera;
        int numberb;

        cout<<"Give me two number..."<<endl;
        cin>>numbera;
        cin>>numberb;
        if (numberb<numbera)
            cout<<"The second number should be bigger.."<<endl;
        while (numberb>numbera){
            cout << numbera ++  <<endl;
        }
        */
    //Diamond hard task
/*
        int input;
        cout << "How many lines do you want"<<endl;
        cin>>input;
        int linewidht = input;
        int m = input / 2;
            for(int i = 0;i < input; ++i){

            int k = abs(m - i);

            for (int j = 0; j < input; ++j) {

                if ( j >= k && j < input - k){

                    cout << "*";

                } else {

                    cout << " ";
                }
                //cout <<" /";
                cout <<" "<< endl;
            }
        }
*/

/*
    for (int i = 1; i <= 100; i++) {

        if (i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz"<<endl;
        }
        else if (i % 3 == 0){
            cout << "Fizz" <<endl;
        }
        else if (i % 5 == 0){
            cout << "Buzz" <<endl;
        }
        else{
            cout << i <<endl;
        }
    }
*/
    return 0;
}


