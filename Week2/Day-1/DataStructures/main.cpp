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

    vector<string>listA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    vector<string>listB = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    listA.insert(listA.begin()+3,"Kiwi");
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
    for(int i=0; i<=listA.size(); ++i)
        if(listA[i]=="Avocado"){
            cout<<"The index number for "<<"Avocado"<<" is "<<i<<'\n';
        }

    return 0;
}