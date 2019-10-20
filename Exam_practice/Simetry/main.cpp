#include <iostream>
#include <vector>

using namespace std;

bool isSymetric(vector<vector<int>>isSym){

    for (int row = 0; row < isSym.size() ; ++row) {
        for (int col = 0; col < isSym[row].size() ; ++col) {
            if (isSym[col][row] != isSym[row][col]) {
                cout<<"It is not symetric"<<endl;
                return false;
            }

        }

    }
    return true;
}

int main() {
    vector<vector<int>>isSym = {
        {7, 7, 7},
        {6, 5, 7},
        {1, 2, 1}
    };

    if(isSymetric(isSym)) {
        cout<< "It is symetric"<<endl;
    }else{
        cout<<"Its not"<<endl;
    }

    return 0;
}