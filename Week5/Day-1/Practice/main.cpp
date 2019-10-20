#include <iostream>
#include <string>
#include <vector>
#include<cstring>
#include<algorithm>
#include<map>

using namespace std;

//DOUBLE ITEMS-------------------------------------------------------------------------------
/*
int main() {
    int n = 5;
    int a;
    int numList[5]={3,4,5,6,7};
    for (int i = 0; i < n; ++i) {
            a = numList[i] * 2 ;
        cout<<a<<endl;
    }


    return 0;
}
*/
//Colors-----------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    // - Create a two dimensional array
    //   which can contain the different shades of specified colors
    // - In `colors[0]` store the shades of green:
    //   `"lime", "forest green", "olive", "pale green", "spring green"`
    // - In `colors[1]` store the shades of red:
    //   `"orange red", "red", "tomato"`
    // - In `colors[2]` store the shades of pink:
    //   `"orchid", "violet", "pink", "hot pink"`
    int i = 3;
    int j = 5;
    string colours [3][5] = {{"lime", "forest green", "olive", "pale green", "spring green"},
                             {"orange red", "red", "tomato"},
                             {"orchid", "violet", "pink", "hot pink"}
              };
    for (int k = 0; k < i ; ++k) {
        for (int l = 0; l < j; ++l) {
            cout<<colours[k][l]<<endl;
        }
    }
    return 0;
}
 */
//APPEND A ------------------------------------------------------------------------------------
/*

int main(int argc, char* args[]) {

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    string anim[3] = {"koal", "pand", "zebr"};
    for (int i = 0; i < 3; ++i) {
        cout<<anim[i] + "a"<<endl;
    }
    return 0;
}
 */

//SWAP ELEMENTS--------------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`
    string temp;
    string abc[3]={"first", "second", "third"};
    for (int i = 0; i < 3; ++i) {

        temp = abc[0];
        abc[0]=abc[2];
        abc[2]=temp;
        cout<<abc[i]<<endl;
    }
    return 0;
}
 */
//SUM ALL------------------------------------------------------------------------------
/*
int multiply(int a[],int n){
    if (n == 0)
        return(a[n]);
    else
        return (a[n] * multiply(a, n -1));

}
int main(int argc, char* args[]) {

    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`
    int ai[5] = {3, 4, 5, 6, 7};
    int n = sizeof(ai)/ sizeof(ai[0]);
    cout<< multiply(ai,n-1)<<endl;
    return 0;
}
 */
//REVERSE-------------------------------------------------------------------------------------------------------------
/*
void reverse(int aj[],int n){
    reverse(aj,aj+n);
}
int main(int argc, char* args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`
    int aj[5] = {3, 4, 5, 6, 7};
    int n = sizeof(aj)/ sizeof(aj[0]);
    for (int i = 0; i < 5; ++i) {
        reverse(aj,n);
        cout<<aj[i]<<endl;
    }
    return 0;
}
 */
//SWAP----------------------------------------------------------------------------------------
/*
void swap(int&, int&);

int main(int argc, char* args[]) {
    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.
    int a =15;
    int b = 23;

    cout<<"a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;

    return 0;
}
void swap(int& x,int&y) {

int tmp = x;
x = y;
y = tmp;

}
 */
//SUM-------------------------------------------------------------------------------------------------------
/*
void sum(int x);
int main(int argc, char* args[]) {

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter
    int a = 0;
    int b;

    cout<<"Give me a number: "<<endl;
    cin>>b;
    sum(b);

    return 0;
}
void sum(int x){
    int sum = 0;

    for (int i = 0; i <= x; ++i) {
        sum+=i;
    }
    cout<<sum<<endl;
}
 */
//APPEND A FUNC--------------------------------------------------------------------------------
/*
void appendAFunc(string a);
int main(int argc, char* args[]) {
    string a = "Chinchill";
    appendAFunc(a);

    // - Create a string variable named `typo` and assign the value `Chinchill` to it
    // - Write a function called `appendAFunc` that gets a string as an input,
    //   appends an 'a' character to its end and returns with a string
    //
    // - Print the result of `appendAFunc(typo)`

    return 0;
}
void appendAFunc(string a) {

    string b = a + "a";

    cout << b << endl;
}
 */
//ANAGRAM---------------------------------------------------------------------------------------------------
/*
void reverseStr(string& str);
void anagram(string x,string y){
    reverseStr(x);
    if (x==y){
        cout<<"It is an anagram"<<endl;
    } else
        cout<<"Its not an anagram"<<endl;
}
void reverseStr(string& str){
    int n = str.length();
    for (int i = 0; i < n/2; ++i) {
        swap(str[i],str[n-i-1]);
    }
}
int main(int argc, char* args[]) {

    string x,y;
cin>>x;
cin>>y;
anagram(x,y);

    return 0;
}
 */
//UNIQUE----------------------------------------------------------------------------------------------------
/*
int main(int argc, char* args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once
    //  Example
    int n = 8;
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    //int n = sizeof(numbers);
    for (int i = 0; i < n; ++i) {

        for (int j = i + 1; j < n; ++j) {
            if (numbers[i] == numbers[j]) {
                for (int k = j; k < n; ++k) {
                    numbers[k] = numbers[k + 1];
                }
                n--;
                j--;
            }
        }cout<<numbers[i]<<endl;
    }
    return 0;
}

*/
//PALINDROME--------------------------------------------------------------------------------------------------

/*
string reverseStr(string& str){
    int n = str.length();
    for (int i = 0; i < n/2; ++i) {
        swap(str[i],str[n-i-1]);
    }return str;
}
int main(int argc, char* args[]) {

    string x,y;
    cin>>x;
    cout<<x<<reverseStr(x)<<endl;

    return 0;
}
 */
//REVERSE-----------------------------------------------------------------------------------------------
/*
void reverse(string& r)
{
    reverse(r.begin(),r.end());
}

int main(int argc, char* args[])
{
    string r = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    reverse(r);
    cout<<r<<endl;

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.
    return 0;
}
 */
//MAP INTRODUCTION-------------------------------------------------------------------------------
/*
int main (){
    map<int,char>asd;

    asd.insert(pair<int,char>(97,'a'));
    asd.insert(pair<int,char>(98,'b'));
    asd.insert(pair<int,char>(99,'c'));
    asd.insert(pair<int,char>(65,'A'));
    asd.insert(pair<int,char>(66,'B'));
    asd.insert(pair<int,char>(67,'C'));
    asd.insert(pair<int,char>(68,'D'));
    map<int,char>::iterator itr;
    for (itr = asd.begin(); itr != asd.end(); ++itr) {

        cout<<'\t'<<itr->first<<" : ";
        cout<<'\t'<<itr->second<<endl;

    }
    return 0;
}
 */


int main(){
    map<string,float>prices;

    prices.insert(pair<string,float>("Milk",1.07));
    prices.insert(pair<string,float>("Rice",1.59));
    prices.insert(pair<string,float>("Eggs",3.14));
    prices.insert(pair<string,float>("Cheese",12.60));
    prices.insert(pair<string,float>("Chicken Breast",9.40));
    prices.insert(pair<string,float>("Apples",2.31));
    prices.insert(pair<string,float>("Tomato",2.58));
    prices.insert(pair<string,float>("Potato",1.75));
    prices.insert(pair<string,float>("Onion",1.10));

    map<string,int>bob;

    bob.insert(pair<string,int>("Milk",3));
    bob.insert(pair<string,int>("Rice",2));
    bob.insert(pair<string,int>("Eggs",2));
    bob.insert(pair<string,int>("Cheese",1));
    bob.insert(pair<string,int>("Chicken Breast",4));
    bob.insert(pair<string,int>("Apples",1));
    bob.insert(pair<string,int>("Tomato",2));
    bob.insert(pair<string,int>("Potato",1));

    map<string,int>::iterator itr;
    for (itr = bob.begin(); itr != bob.end(); ++itr) {
        cout << '\t' << itr->second << endl;
    }
    //map<string,float>::iterator itrr;
    //for (itrr = prices.begin(); itrr != prices.end(); ++itrr) {
        //cout<<'\t'<<itr->second<<endl;
    //}
    return 0;
}