#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB ;
    int bits;
};

// Use the Notebook struct, give values to the fields and print them out in the main!


typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main(){

    struct Computer IBM;

    IBM.cpu_speed_GHz = 3.22;
    IBM.ram_size_GB = 8;
    IBM.bits = 128;

    Notebook MAC;

    MAC.cpu_speed_GHz = 1.6;
    MAC.ram_size_GB = 4;
    MAC.bits = 32;

    printf("IBM computer has: \n");
    printf("CPU: %.2f Ghz\n", IBM.cpu_speed_GHz);
    printf("RAM: %d Gigabyte\n", IBM.ram_size_GB);
    printf("BITS: %d bits\n\n", IBM.bits);

    printf("Mac computer has: \n");
    printf("CPU: %.2f Ghz\n", MAC.cpu_speed_GHz);
    printf("RAM: %d Gigabyte\n", MAC.ram_size_GB);
    printf("BITS: %d bits\n", MAC.bits);

    return 0;
}