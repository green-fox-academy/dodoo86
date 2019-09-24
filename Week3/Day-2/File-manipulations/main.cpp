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
//WRITE SINGLE LINE------------------------------------------------------------
/*

int main() {
        ofstream myFile;
        myFile.exceptions(ofstream::failbit | ofstream::badbit);
        try {
            myFile.open("new_File.txt");
            string str = "Laszlo David Tamas";
            myFile << str;
            myFile.close();
        } catch (ofstream::failure& e) {
            cout << e.what() <<endl;
        }
        return 0;
}

 */
//WRITE MULTIPLE LINES------------------------------------------------------------------
/*

int main() {

    int number;
    string word;
    string path;
    cout<<"Give me the filename:  "<<endl;
    cin>>path;
    cout<<"Give me a word..or more:  "<<endl;
    cin>>word;
    cout<<"Give me a number"<<endl;
    cin>>number;

    ofstream myFile;

        myFile.open(path);
        string str = word;
        for (int i=0; i< number;++i){
            myFile <<str<<endl;
        }
        myFile.close();

    return 0;
}

*/
//COPY FILES-----------------------------------------------------------------------------------


int main() {
    string fileA;
    string fileB;
    string line;
    cout<<"Give me a filename:  "<<endl;
    cin>>fileA;
    cout<<"Give me another filename:  "<<endl;
    cin>>fileB;
    cout<<"give me some text"<<endl;
    cin>>line;

    ofstream first;
    ofstream second;
    first.open(fileA);
    second.open(fileB);
    string str = line;
    first << str;
    second << str;
    first.close();
    second.close();






    return 0;
}
