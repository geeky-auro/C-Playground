// Write a C program to check whether the Host machine is in Little Endian or Big
// Endian. Enter a number, print the content of each byte location and Convert the
// Endianness of the same i.e. Little to Big Endian and vice-versa.

#include <stdio.h>

// Function to check the endianness of the host machine
int isLittleEndian() {
    unsigned int num = 1;
    char *ptr = (char *)&num;
    return (*ptr == 1);
}

// Function to convert the endianness of a 4-byte integer
unsigned int convertEndianness(unsigned int num) {
    return ((num >> 24) & 0xFF) | ((num >> 8) & 0xFF00) | ((num << 8) & 0xFF0000) | ((num << 24) & 0xFF000000);
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    // Extracted byte from the LSB of the number=2
    printf("\nExtracted byte from the LSB of the Number=2\n");
    char *lsbBytePtr = (char *)&num;
    printf("Memory representation of the Number:\n");
    printf("Memory Address\t\tValue\n");
    for (int i = 0; i < sizeof(num); i++) {
        printf("%p\t\t%d\n", &lsbBytePtr[i], lsbBytePtr[i]);
    }

    // Check the endianness of the host machine
    if (isLittleEndian()) {
        printf("\nThe LSB of the number is stored at the lowest memory address. Hence, the host machine is in little Endian.\n");
    } else {
        printf("\nThe LSB of the number is stored at the highest memory address. Hence, the host machine is in big Endian.\n");
    }

    // Convert the endianness of the number
    unsigned int convertedNum = convertEndianness(num);

    // Memory representation of the number after conversion
    printf("\nThe Number is converted to Big Endian now.\n");
    printf("Memory representation of the Number:\n");
    printf("Address ->\tValue\n");
    char *convertedBytePtr = (char *)&convertedNum;
    for (int i = 0; i < sizeof(convertedNum); i++) {
        printf("%p\t%d\n", &convertedBytePtr[i], convertedBytePtr[i]);
    }

    printf("\nThe number in Big Endian Format is %u\n", convertedNum);

    return 0;
}

// OUTPUT
// Enter a number: 258

// Extracted byte from the LSB of the Number=2
// Memory representation of the Number:
// Memory Address          Value
// 0061FF0C                2
// 0061FF0D                1
// 0061FF0E                0
// 0061FF0F                0

// The LSB of the number is stored at the lowest memory address. Hence, the host machine is in little Endian.

// The Number is converted to Big Endian now.
// Memory representation of the Number:
// Address ->      Value
// 0061FF08        0
// 0061FF09        0
// 0061FF0A        1
// 0061FF0B        2

// The number in Big Endian Format is 33619968
