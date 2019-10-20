#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>>greatest(vector<vector<int>>mat1, vector<vector<int>> mat2) {
    vector<vector<int>> outPut (mat1);

    for (int row = 0; row < mat1.size() ; ++row) {
        for (int col = 0; col < mat1[row].size() ; ++col) {
            if (mat1[row][col] > mat2[row][col]) {
                outPut[row][col] = mat1[row][col];
            }else{
                outPut[row][col] = mat2[row][col];
            }

        }

    }
    return outPut;
}

int main() {
    vector<vector<int>>mat1 = {
        {0, 0, 0},
        {0, 1, 3},
        {4, 0, 9}
    };


    vector<vector<int>>mat2 = {
            {5, 0, 8},
            {-4, 1, 0},
            {0, 8, 0}
    };

    vector<vector<int>>res = greatest(mat1,mat2);
    for (vector<int>col : res) {
        for (int element : col ){
            cout<<element<<", ";
        }
        cout<<endl;
    }
    return 0;
}