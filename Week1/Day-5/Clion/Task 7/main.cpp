#include <iostream>
#include<string>

using namespace std;

int main(int argc, char* args[]) {
    //THIRD---------------------------------------------------
    /*
    int q[4] = {4,5,6,7};

    cout << "The third element is : " << q[2] << endl;

    */
    //COMPARE LENGTH
    /*
    int p1[3] = {1,2,3};
    int p2[2] = {5,4};

    if (p1[2] > p2[1]) {
        cout << "p2 is longer" << endl;
    }

    */
    //SUM ELEMENTS-------------------------------------------------
    /*
    int r[4] = {54,23,66,12};

        cout<< r[1]+r[2] <<endl;

     */
    //CHANGE ELEMENT-----------------------------------------------
    /*
    int s[6] = {1,2,3,8,5,6};
    int temp;
    temp = s[3];
    s[3]=s[4];
    s[4]=temp;
    cout<<s[4]<<" is the forth element"<<endl;
    */
    //INCREMENT ELEMENT---------------------------------------------
    /*
    int t[5] = {1,2,3,4,5};
        t[3] = t[3]+ 1;
        cout<<t[3]<<endl;
    */
    //PRINT ELEMENTS--------------------------------------------------
    /*
    int numbers[4]= {4,5,6,7};

     for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
         cout<<numbers[i]<<endl;
     }
     */
    //MATRIX-----------------------------------------------------------
     /*
    int x,y;
    cout<< "Give me two number..."<<endl;
    cin >> x;
    cin >> y;
    int ary[x][y];
    for( int i = 0; i< x; i++) {
        for (int j = 0; j < y; j++) {
            if (i == j) {
                ary[i][j] = 1;
                cout << ary[i][j];
            } else {
                ary[i][j] = 0;
                cout << ary[i][j];
            }
        }
        cout << endl;
    }
    */
     //DOUBLE ITEMS-----------------------------------------------------------------------------
    /*
     int numlist[5] = {3,4,5,6,7};
        cout<<numlist[0]*2<<","<<numlist[1]*2<<","<<numlist[2]*2<<","<<numlist[3]*2<<","<<numlist[4]*2<<endl;

    //Other solution

        for(int i = 0; i < sizeof(numlist)/sizeof(numlist[0]); i++) {
            cout<<numlist[i]*2<<endl;
        }
        */
    //COLOURS--------------------------------------------------------------------------
    /*
    string colour[3][5] = {
            {"lime", " forest green", " olive", " pale green", " spring green"},
            {"orange red", " red", " tomato"},
            {"orchid", " violet", " pink", " hot pink"}
    };
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << colour[i][j];
        }   cout<<endl;
    }
     */
    // APPEND--------------------------------------------------------------------------
    /*
    string animals[3] = {"koal","pand","zebr"};
    for (const auto & animal : animals) {
        cout << animal << "a" <<endl;
    }
    */
    //SWAP ELEMENTS-------------------------------------------------------------------
    /*
    string abc[3] = {"first","second","third"};
    cout << abc[2]<< " " << abc[1]<< " " << abc[0] <<endl;

    string cba[3] = {"first","second","third"};
        swap(cba[0],cba[2]);
        for (int i = 0; i < 3; ++i){
            cout << cba[i];
            cout << endl;
    }
    */
    //SUM ALL ELEMENTS-----------------------------------------------------------------
    /*
    int ai[5] = {3,4,5,6,7};
        int sum;
        for (int i = 0; i < 5; ++i){
            sum = sum+ai[i];}
    cout << sum <<endl;

     // OTHER SOULTION

    int ai[5] = {3,4,5,6,7};
        cout<< ai[0] + ai[1] + ai[2] + ai[3] + ai[4] <<endl;

    */
    //REVERSE LIST-----------------------------------------------------------------------
    /*
    int aj [5]= {3,4,5,6,7};
    int revaj[5];
    for (int i = 0; i < 5 ; ++i){
        revaj[i] = aj[4-i];
    }
    for (int j = 0; j < 5; ++j){
        aj[j] = revaj[j];
        cout << aj[j] <<endl;
    }
    */

    return 0;
}