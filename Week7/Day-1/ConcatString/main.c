#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* twostr (char a[],char b[]){
    int size1 = 0;
    int size2 = 0;
    char *c = NULL;

    while(a[size1] != '\0'){
        size1++;
    }
    while(b[size2] != '\0'){
        size2++;
    }
    c = (char*)malloc((size1 + size2 + 1)* sizeof(char));

    strcpy(c,a);
    strcat(c,b);

    return c;
    }

int main(){
    char *str1 = "Something something";
    char *str2 = " added stuff";
    /*
    printf("write something: ");
    scanf("%s",str1);
    printf("write something else: ");
    scanf("%s",str2);
     */
    char *c = twostr(str1,str2);
    printf("%s",c);
    free(c);
    return 0;
}