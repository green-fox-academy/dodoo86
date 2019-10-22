#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

/*
void reverseWords(string str)
{
    vector<char> st;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ')
            st.push_back(str[i]);


        else {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
    }


    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    string str = "lleW ,enod taht saw ton taht drah";
    reverseWords(str);
    return 0;
}

void reverseWord(string tmp){
    string word;
    stringstream i(tmp);

    while (i>>word){
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
}
int main(){
    string examp = "lleW ,enod taht saw ton taht drah";
    reverseWord(examp);
}
 */

vector<string> sentenceSplitter(string sentence){
    vector<string> result;
    string word;
    stringstream i(sentence);

    while (i>>word){
        result.push_back(word);
    }

    return result;
}
void reverser(string &rev){

    reverse(rev.begin(),rev.end());

}

int main(){
    vector<string> words;
    string a = "lleW ,enod taht saw ton taht drah";
    words = sentenceSplitter(a);
    for (int i = 0; i < words.size() ; ++i) {
        reverser(words[i]);
        cout<<words[i]<<" ";
    }
    reverser(a);
}