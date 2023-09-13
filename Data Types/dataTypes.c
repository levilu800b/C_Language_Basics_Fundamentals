#include <stdio.h>

int main() {
    // Data Types
    // int, float, double, char
    // int - 4 bytes = 32 bits
    // float - 4 bytes = 32 bits
    // double - 8 bytes = 64 bits
    // char - 1 byte = 8 bits
    // short - 2 bytes = 16 bits
    // long - 8 bytes = 64 bits
    // long long - 8 bytes = 64 bits
    // long double - 16 bytes = 128 bits

    char myChar = 'A';
    int myInt = 10;
    float myFloat = 10.5;
    double myDouble = 10.5;
    short myShort = 100;
    long myLong = 1234567890L; // The 'L' suffix indicates a long literal
    long long myLongLong = 1234567890123456789LL; // The 'LL' suffix indicates a long long literal
    unsigned int myUnsigned = 50U; // The 'U' suffix indicates an unsigned literal
    unsigned long myUnsignedLong = 1234567890UL; // The 'UL' suffix indicates an unsigned long literal
    _Bool isTrue = 1; // 1 represents true, 0 represents false
    printf("myUnsignedLong: %lu\n", myUnsignedLong);
    printf("myLongLong: %lld\n", myLongLong);
    printf("myLong: %ld\n", myLong);
    printf("myShort: %hd\n", myShort);
    printf("myFloat: %f\n", myFloat);
    printf("myDouble: %lf\n", myDouble);
    printf("myInt: %d\n", myInt);
    printf("myChar: %c\n", myChar);
    
    return 0;
}