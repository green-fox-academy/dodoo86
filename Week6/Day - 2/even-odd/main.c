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
     * Write a function called IsEven which takes a byte and returns with true
     * if byte is even. Use only bitwise operators!
     */

void isEven(uint8_t byte){

    if ((byte & 1) == 0) {
        printf("%d true\n",byte);
    }
}

/* 2.
 * Write a function called IsOdd which takes a byte and returns with true
 * if byte is odd. Use only bitwise operators!
 */

void isOdd(uint8_t byte){

    if (byte | 1){
        printf("%d true\n",byte);
    }
}

void isEvenOrOdd(uint8_t byte){

    if (byte & 1){
        printf("%d false\n",byte);
    }else{
        printf("%d true\n",byte);
    }
}

int main() {
    uint8_t test = 0b0100;
    //isEvenOrOdd(test);
    isEven(test);
    //isOdd(test);
    return 0;
}