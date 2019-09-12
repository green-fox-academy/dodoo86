#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* args[]) {

    //string name;
    //cout << "What is Your name ?" << endl;
    //cin >> name;
    //cout << "Hello " + name << endl;



    //double miles;
    //cout << "How many miles ?" << endl;
    //cin >> miles;
    //double kilometers = miles * 1.6;
    //cout << kilometers << "Kilometers";

    //int number;
    //cout << "Give me a number ..." << endl;
    //cin >> number;
    //if (number % 2<=0){
        //cout << "Your number is even";}
    //else {
    //cout << "Your number is not even" << endl;
//}

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


}