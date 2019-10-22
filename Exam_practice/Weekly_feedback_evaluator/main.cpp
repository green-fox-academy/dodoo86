#include <iostream>
#include <fstream>
#include <map>
#include <vector>

using namespace std;
/*
int feedbacks(string filename) {


    ifstream input;
    input.open(filename);
    if (!input.is_open()){
        cout<<"File cant be found !!!"<<endl;
    }
    vector<vector<int>>feed;
    int nums;
    while(input >> nums){
        feed[nums]++;
    }
    input.close();
    */




int main() {

    double avgMat[50];
    float sum = 0;
    float average = 0;


    vector<vector<int>>nums = {
            {1, 3, 5, 3},
            {2, 3, 4, 3},
            {1, 5, 4, 4},
            {5, 5, 5, 5}
    };

    for (int i = 0; i < 4; i++) {
        float sum = 0.f;
        for (int j = 0; j < 4; j++) {
            sum += nums[j][i];
        }
        float avg = sum / 4;
        cout << "Average of row " << i << ": " << avg << endl;

    }

    return 0;
}