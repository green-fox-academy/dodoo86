#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int main () {
FILE *fp;
int count = 0;
char filename[20];
char c;

fp = fopen("my-file.txt","r");

if (fp == NULL){
    printf("The file %s had 0 lines\n ",filename);
    return 0;
}
for (c = getc(fp); c != EOF; c = getc(fp))
    if (c == '\n')
        count = count + 1;

    fclose(fp);
    printf("The File %s has %d lines\n ",filename,count);
    return 0;
}