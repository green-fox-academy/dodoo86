#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"
char print_values(char word[1000]){
    FILE *fptr;


    fptr = fopen("test.txt","w");
        if(fptr == NULL){
            printf("ERROR!!!");
        }
        printf("Enter a sentence: \n");
        gets(word);

        fprintf(fptr,"%s", word);
        fclose(fptr);

    return word[1000];
}
int main()
{

    print_values()
    return 0;
}