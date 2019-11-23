#include <stdio.h>
typedef struct
{
    unsigned char fileMarker1; /* 'B' */
    unsigned char fileMarker2; /* 'M' */
    unsigned int bfSize;
    unsigned short unused1;
    unsigned short unused2;
    unsigned int imageDataOffset; /* Offset to the start of image data */
}FILEHEADER;

int main(int argc, char *argv[] )
{
    FILEHEADER fileHeader;  /* make an instance of the fileheader struct */
    FILE *inbin;
    FILE *outbin;
    char image[256];
    FILEHEADER data;


    //printf("Filename: ");
    //scanf("%s", &image);

    inbin = fopen("mic.bmp", "rb");

    fread(&data,sizeof(unsigned char),8, inbin);

    if (inbin == NULL)
    {
        printf("The file cannot be opened.\n");
    }
    else
    {
        printf("filemarker1 = %c\n", data.fileMarker1);
        printf("filemarker2 = %c\n", data.fileMarker2);
        printf("filemarker2 = %d\n", data.bfSize);
        printf("filemarker2 = %d\n", );
    }




    fclose(inbin);

    return 0;
}
