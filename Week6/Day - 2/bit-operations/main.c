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

int main() {
    uint8_t myVar = 0b10100101;
    int myNum = 165;

    printf("%d\n",myVar);
    printf("%x\n",myVar);
    //PrintBinary(myNum);

    PrintBinary(myVar << 4);
    PrintBinary(myVar);
    PrintBinary(myVar >> 2);
    PrintBinary(myVar & 0b00100000);
    PrintBinary(myVar | 0b11100101);
    PrintBinary(myVar ^ 0b11111111);

    return 0;
}