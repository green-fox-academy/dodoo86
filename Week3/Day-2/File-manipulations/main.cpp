#include <iostream>
#include <string>
#include <fstream>
#include <exception>


using namespace std;


//DIVIDE BY ZERO-------------------------------------------------------------
/*
int main() {

    int a = 10;
    int b;
    cout<< "Give me a number: "<<endl;
    cin>>b;
    if(b == 0){
        cout<<string("Cant divide by 0");
    }else{
        cout<<a/b<<endl;
    }
    return 0;
}

 */
//DIVIDE BY ZERO WITH EXCEPTIONS-------------------------------------------------------
/*

int main() {
    try{
        int a = 10;
        int b;
        cout<< "Give me a number: "<<endl;
        cin>>b;
        if(b == 0){
            throw string("FAIL");
        }
        cout<<a/b<<endl;
    }catch(string& e){
        cout<<e<<endl;
    }
    return 0;
}

 */
//PRINT EACH LINE------------------------------------------------
/*


int main() {
        ifstream myFile;

        myFile.open("my-file.txt");
        string text;
        if (myFile.is_open()) {
            while (getline(myFile, text)) {
                cout << text << endl;
            }
        }
            else{
                cout <<"File cannot be opened..."<<endl;
            }

    return 0;
}

 */
//COUNT LINES--------------------------------------------------------
/*

int main() {
    ifstream myFile;

    myFile.open("my-file.txt");
    string text;
    int linecounter;
    if (myFile.is_open()) {
        while (getline(myFile, text)) {
            linecounter ++;
            cout << linecounter << endl;
        }

    }
    else{
        cout <<"File cannot be opened..."<<endl;
    }

    return 0;
}

 */