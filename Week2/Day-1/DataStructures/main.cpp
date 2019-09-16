#include <iostream>
#include <vector>
#include <map>
#include <iterator>


using namespace std;

int main(int argc, char* args[]) {

    //LIST INTRODUCTION --------------------------------------------------------------
    /*
    vector<string>vect1;

    for (vector<string>::const_iterator i = vect1.begin(); i != vect1.end(); ++i)
        cout << *i << ' ';


    vect1.insert(vect1.end(),"1. William");
    vect1.insert(vect1.end(),"2. John");
    vect1.insert(vect1.end(),"3. Amanda");

    for(const auto& vect1 : vect1)
    {
        std::cout << vect1 << std::endl;
    }

    */
    //MAP INTRODUCTION 1 -------------------------------------------------------------
    /*
    map<int,char>mymap;
    mymap.insert({97, 'a'});
    mymap.insert({98, 'b'});
    mymap.insert({99, 'c'});
    mymap.insert({65, 'A'});
    mymap.insert({66, 'B'});
    mymap.insert({67, 'C'});
    mymap.insert({100, 'D'});
    mymap.erase(97);
    cout << "KEY\tELEMENT\n";
    for (auto itr = mymap.begin(); itr != mymap.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    typedef multimap<int, char>::iterator MMAPIterator;


    pair<MMAPIterator, MMAPIterator> result = mymap.equal_range('c');

    cout << "All values for key 'c' are," << endl;

    for (MMAPIterator it = result.first; it != result.second; it++)
        cout << it->first << endl;

    int count = distance(result.first, result.second);
    cout << "Total values for key 'c' are : " << count << endl;

    int value = 100;
    for (auto itr = mymap.begin(); itr != mymap.end(); itr++)
        if (itr -> first == value)
            cout << itr -> first << "  "
                 << itr -> second << endl;

     */
    //LIST INTRODUCTION 2 -----------------------------------------------------
    /*
    vector<string>listA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    vector<string>listB = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    listA.insert(listA.begin()+3,"Kiwi");
    listB.insert(listB.begin()+5,"Passion Fruit");
    listB.insert(listB.begin()+6,"Pomelo");
    for (int y = 0; y < listA.size(); ++ y){
        cout << listA.at(y) << endl;

    }
        cout << endl;
    vector<string>::iterator it = find(listA.begin(), listA.end(), "Durian");
    if (it != listA.end()){
        cout << "Element Found" << endl;}
    else{
        cout << "Element Not Found" << endl;}
        cout << endl;
        listB.erase(find(listB.begin(), listB.end(), "Durian"));
        for (int x = 0;x < listB.size(); ++ x ){
            cout << listB.at(x) << endl;
        }
        cout << endl;
    if (listA.size()>listB.size()){
        cout << "List A has more fruits" << endl;
    }
    else if (listB.size()>listA.size()){
        cout << "List B has more fruits" <<endl;
    }
    else cout <<"List A and list B has equal amounth of fruits" <<endl;
        cout<<endl;
    for(int i=0; i<=listA.size(); ++i)
        if(listA[i]=="Avocado"){
            cout<<"The index number for "<<"Avocado"<<" is "<<i<<'\n';
        }
    for(int u=0; u<=listB.size(); ++u)
        if(listB[u]=="Durian") {
            cout << "The index number for " << "Durian" << " is " << u << '\n';
        }
    cout<<endl;
    cout<<listA[2]<<endl;
    */

    //MAP INTRODUCTION 2 -------------------------------------------------------------

    /*
    map<string,string>map1;

    map1.insert({"978-1-60309-452-8", "A Letter to Jo"});
    map1.insert({"978-1-60309-459-7", "Lupus"});
    map1.insert({"978-1-60309-444-3"	, "Red Panda and Moon Bear"});
    map1.insert({"978-1-60309-461-0", "The Lab"});
    map1.erase("978-1-60309-444-3");
    map1.insert({"978-1-60309-450-4", "They Called Us Enemy"});
    map1.insert({"978-1-60309-453-5", "Why Did We Trust Him?"});

    for (auto itr = map1.begin(); itr != map1.end(); ++itr) {
        cout << itr->second <<
                 '\t'<<"(ISBN: " <<itr->first <<")"<< '\n';

    }
    for (map<string,string>::iterator it = map1.begin();it != map1.end(); ++it){
        if (it->second == "The Lab"){
            map1.erase(it);
        }
    }
    map<string,string>::iterator it3 = map1.find("478-0-61159-424-8");
    if (it3 != map1.end()){
        cout<< "ISBN Found"<<endl;
    }else{
        cout<< "ISBN Not found"<<endl;
    }
    for (pair<string,string>bookPair:map1){
        if (bookPair.first == "978-1-60309-453-5"){
            cout<<bookPair.second<<endl;
        }
    }

    */
    //PERSONAL FINANCES -------------------------------------------------------------
    /*
    vector<int>add = {500,1000,1250,175,800,120};
    int sum;
    for (int i = 0; i<add.size(); ++i){
        sum += add[i];
    }

        cout<<"We spent: "<<sum<<" in total"<<endl;
    int biggest;
    for(int j = 0; j<add.size(); ++j){
        if(add[j]>biggest) {
            biggest = add[j];
        }
    }
        cout<<"The biggest expense was: "<< biggest <<endl;
    int small;
    for(int x = 0; x < add.size(); ++x){
        if (add[x]<small || x ==0) {
            small = add[x];
        }
    }
        cout<<"The smallest expense was: "<< small <<endl;
    */


    return 0;
}