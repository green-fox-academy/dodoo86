#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// the resulting array should be 20 elements long
// print the array in descending order
// delete the arrays after you don't use them
void swap(int *xp, int *yp){
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}
void sort(int arr[], int n){
    int i,j;
    for (i = 0; i < n-1; ++i) {
        for (j = 0; j <n-i-1 ; j++) {
            if (arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}
int main()
{
    int* pointer1 = malloc(sizeof(int)*10);
    int n = 0;
    for (int i = 0; i < 10 ; ++i) {
        while (n % 2 == 0) {
            pointer1[i] = n;
            n++;
        }
        n++;

    }
    int* pointer2 = malloc(sizeof(int)*10);
    int m = 0;
    for (int i = 0; i < 10 ; ++i) {
        while (m % 2 ==1){
            pointer2[i]= m;
            m++;
        }
        m++;
    }
    pointer1 = realloc(pointer1,20* sizeof(int));
    for (int k = 10; k < 20; ++k) {
        pointer1[k] = pointer2[k-10];
    }
    free(pointer2);
   // for (int j = 0; j < 20 ; ++j) {
        //printf("%d, ",pointer1[j]);
    //}
    int b = 20;
    sort(pointer1,b);
    for (int j = 0; j < 20 ; ++j) {
        printf("%d, ", pointer1[j]);
    }
    free(pointer1);
    return 0;
}