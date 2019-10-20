#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int frequency(int freq, string filename){
    ifstream input;
    input.open(filename);
    if(!input.is_open()){
        cout<<"File cant be found!!!"<<endl;
    }
    map<string,int>wordmap;
    string word;
    while(input>>word){
        wordmap[word]++;
    }
    input.close();

    ofstream output;
    output.open("output.txt");
    if(!output.is_open()){
        cout<<"Output file cant be created!!!"<<endl;
    }
    for (pair<string,int> p : wordmap) {
        if (p.second == freq) {
            output << p.first << ", ";
        }
    }
    output.close();
    return 0;
}

int main() {
    int res = frequency(2,"text.txt");
    cout<<"frequency returned "<<res<<endl;
    return 0;
}