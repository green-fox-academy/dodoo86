#include <stdio.h>
#include <stdlib.h>

// Please use the realloc function where applicable!
// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int* pointer = NULL;
    int x;
    int sum = 0;

    printf("Give me a number: ");
    scanf("%d", &x);
    printf("Your number is %d\n", x);

    pointer = (int*) malloc(x * sizeof(int));

    printf("Enter %d more numbers: \n",x);
    for (int i = 0; i < x ; ++i) {
        scanf("%d",pointer+i);
        sum += *(pointer + i);
    }

    pointer = (int*)realloc(pointer,sum* sizeof(int));

    for (int j = 1; j < sum+1; ++j) {
        *(pointer + j)=j;
        printf("%d\n", *(pointer+j));
    }
    free(pointer);

    return 0;
}