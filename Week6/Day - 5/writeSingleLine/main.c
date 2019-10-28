#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{

    char sentence[1000];
FILE *fptr;

fptr = fopen("my-file.txt", "w");
    if(fptr == NULL){
        printf("ERROR!!!");
        return -1;
    }
    printf("Enter a sentence: \n");
    gets(sentence);

    fprintf(fptr,"%s", sentence);
    fclose(fptr);
    return 0;
}