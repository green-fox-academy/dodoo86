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

/*
     * Write a function called SetBit which takes a byte and a bit position
     * and sets the bit of byte in the specified bit position to 1.
     * E.g. byte = 0b1100, bit position = 1 => returns with 0b1110
     */

u_int8_t Set_Bit(uint8_t byte, char bit){

    u_int8_t bitMask = 1 << bit;

    return byte | bitMask;
}

/*
     * Write a function called ClearBit which takes a byte and a bit position
     * and clears the bit of byte in the specified bit position to 0.
     * E.g. byte = 0b1100, bit position = 2 => returns with 0b1000
     */

u_int8_t ClearBit(uint8_t byte, char bit){

    u_int8_t bitMask = 1 << bit;

    bitMask = ~bitMask;

    return byte & bitMask;
}

/*
     * Write a function called ToggleBit which takes a byte and a bit position
     * and toggles the bit of byte in the specified bit position.
     * E.g. byte = 0b1100, bit position = 1 => returns with 0b1110
     * E.g. byte = 0b1100, bit position = 2 => returns with 0b1000
     */

uint8_t ToggleBit(uint8_t byte, char bit){

    uint8_t bitMask = 0b1 << bit;

    return byte ^ bitMask;
}

int main() {

    uint8_t test = 0b1100;
    uint8_t test2 = 0b1100;
    uint8_t test3 = 0b1100;

    PrintBinary(test);

    test = Set_Bit(test, 1);
    PrintBinary(test);

    test2 = ClearBit(test2,2);
    PrintBinary(test2);

    test3 = ToggleBit(test3,1);
    PrintBinary(test3);


    return 0;
}