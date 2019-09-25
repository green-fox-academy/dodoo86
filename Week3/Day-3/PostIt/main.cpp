#include <iostream>
#include <string>

using namespace std;

class postIt{
public:
    string backgroundColour;
    string text;
    string textColour;
    postIt (string aBackgroundColour, string atext, string atextColour){
        backgroundColour = aBackgroundColour;
        text = atext;
        textColour = atextColour;

    }
};

int main() {

    postIt idea1("orange","Idea 1","blue");
    postIt awesome("pink","Awsome","black");
    postIt Super("yellow","Superb!","green");


    cout<<idea1.text<<endl;
    cout<<awesome.text<<endl;
    cout<<Super.text<<endl;



    return 0;
}