#include <iostream>
#include<string>

using namespace std;

int main(int argc, char* args[]) {
    //THIRD
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
    //SUM ELEMENTS
    /*
    int r[4] = {54,23,66,12};

        cout<< r[1]+r[2] <<endl;

     */
    //CHANGE ELEMENT
    /*
    int s[6] = {1,2,3,8,5,6};
    int temp;
    temp = s[3];
    s[3]=s[4];
    s[4]=temp;
    cout<<s[4]<<" is the forth element"<<endl;
    */
    //INCREMENT ELEMENT
    /*
    int t[5] = {1,2,3,4,5};
        t[3] = t[3]+ 1;
        cout<<t[3]<<endl;
    */
    //PRINT ELEMENTS
    /*
    int numbers[4]= {4,5,6,7};

     for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
         cout<<numbers[i]<<endl;
     }
     */
    //MATRIX
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
     //DOUBLE ITEMS


    return 0;
}