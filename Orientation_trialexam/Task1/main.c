#include <stdio.h>
/*
int searchMax (int array[],int n){
int i;
int max = array[0];

    for (i = 0; i < n; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int searchMin (int array[],int n){
    int e;
    int min = array[0];

    for (e = 0; e < n; e++) {
        if (array[e] < min)
            min = array[e];
    }
    return min;
}
float GetTrickyAvg(int min,int max){
    float res = ((float)min + (float)max)/2;
    return res;
}
 */

float GetTrickyAvg(int array[],int n){
    int i;
    int max = array[0];

    for (i = 0; i < n; i++) {
        if (array[i] > max)
            max = array[i];
    }
    int e;
    int min = array[0];

    for (e = 0; e < n; e++) {
        if (array[e] < min)
            min = array[e];
    }
    float res = ((float)min + (float)max)/2;
    return res;
}
int main() {
    int array[] = {5, 2, 8, -1};
    int n = sizeof(array)/ sizeof(array[0]);
    //printf("Largest is: %d\n", searchMax(array,n));
    //printf("Smallest is: %d\n", searchMin(array,n));
    printf("avarage is %1.1f\n", GetTrickyAvg(array,n));
    return 0;
}