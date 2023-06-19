/*
Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators
*/

#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    int size = sizeof(unsigned int) * 8;

    for (i = size - 1; i >= 0; i--) {
        unsigned int bit = (num >> i) & 1;

        printf("%u", bit);
    }
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}
