#include <iostream>
#include <vector>
#include "Pirate.h"
#include "Ship.h"

using namespace std;

/*
int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%%
    // %    %
    // %    %
    // %    %
    // %    %
    // %%%%%%
    //
    // The square should have as many lines as the number was
    int row;
    cout << "Give me a number...:" << endl;
    cin >> row;

    for (int i = 1; i <= row+1 ; ++i) {
        cout << "%";
    }
    cout << endl;
    for (int i = 1; i < row-2; ++i) {
     cout << "%";
    for (int j = 1; j < row ; ++j) {
        cout << " ";
    }
    cout << "%" << endl;
}

 for (int i = 1; i <= row+1 ; ++i) {
        cout << "%";
    }
    cout<<endl;
    return 0;
}
 */
//----------------------------------------------------------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    int i=1;
    for (int i = 1; i < 5; ++i) {
        for (int j = 0; j < 3 ; ++j) {
            cout<<"% ";
        }
        cout<<"%"<<endl;
        if (int i = 0%2 == 0 ){
            cout<<" % % % % "<<endl;
        }

    }
    return 0;
}
 */
//ARRAYS-------------------------------------------------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    // - Create an array variable named `q`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print the third element of `q`

    int numbers;

    cout<<"Size?: "<<endl;
    cin>>numbers;
    int array[numbers][numbers];

    for (int i = 0; i < numbers ; ++i) {
        for (int j = 0; j <numbers ; ++j) {
            if (i ==j){
                array[i][j] = 1;
            }else {
                array[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < numbers ; ++i) {
        for (int j = 0; j < numbers; ++j) {
            cout << array[i][j];
        }
        cout << endl;
    }
    return 0;
}
// - Create an array variable named `numbers`
//   with the following content: `[4, 5, 6, 7]`
// - Print all the elements of `numbers`
 */

//COLORS-------------------------------------------------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {


string a = "lime,forest green,olive, pale green, spring green.";
string b = "orange red, red, tomato.";
string c = "orchid, violet, pink, hot pink.";

string array[3][3] = {a,b,c};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j <3 ; ++j) {
            cout<<array[i][j]<<endl;
        }
    }


    return 0;
}
*/

//PIRATE----------------------------------------------------------------------------------
int main() {

    srand(time(nullptr));

    Pirate Rian;
    Pirate Brian;

    Rian.makeCaptain();
    Rian.brawl(&Brian);

    Brian.howsItGoingMate();
    Rian.howsItGoingMate();

    Ship Hajo("Hajo");
    Hajo.fillShip();
    Hajo.printStatus();

    Ship Space("Space");
    Space.fillShip();
    Space.printStatus();

    Hajo.battle(&Space);

    Hajo.printStatus();
    Space.printStatus();

    return 0;
}