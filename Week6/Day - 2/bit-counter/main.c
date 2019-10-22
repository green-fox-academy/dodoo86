#include <stdio.h>
#include <stdint.h>

void PrintBinary(uint8_t byte) {
    printf("%c%c%c%c %c%c%c%c\n",
           (byte & 0x80 ? '1' : '0'),
           (byte & 0x40 ? '1' : '0'),
           (byte & 0x20 ? '1' : '0'),
           (byte & 0x10 ? '1' : '0'),
           (byte & 0x08 ? '1' : '0'),
           (byte & 0x04 ? '1' : '0'),
           (byte & 0x02 ? '1' : '0'),
           (byte & 0x01 ? '1' : '0'));
}

/* 1.
     * Write a function called CountOnes which takes a byte returns
     * with the number of one bits in it.
     * E.g. byte = 0b1101 => returns with 3
     */

void CountOnes(uint8_t byte){
    int ones = 0;
    while (byte > 0){
        ones += byte & 1;
        byte >>= 1;
    }

    printf("Amount of ones: %d \n",ones);
}

/* 2.
 * Write a function called CountZeros which takes a byte returns
 * with the number of zero bits in it.
 * E.g. byte = 0b1000 => returns with 3
 */

void CountZeros(uint8_t byte){
    int zeros = 0;

    for (int i = 0; i < 8 ; ++i) {
        if (((byte >> i)& 0b1) == 0){
            zeros++;
        }
    }

    printf("Amount of zeros: %d \n",zeros);
}

int main() {
    uint8_t test = 0b10100101;
    CountOnes(test);
    CountZeros(test);

    return 0;
}