#include <stdio.h>

int main () {
    unsigned char iAmUnsignedChar = 0; 
    unsigned short iAmUnsignedShort = 0;
    unsigned int iAmUnsignedInt = 0;
    unsigned long long iAmUnsignedLongLong = 0;
    float iAmFloat = 0.5f;
    double iAmDouble = 10000;
    long double iAmLongDouble = 12;

    printf("%lu bytes \n", sizeof(float));

    return 0;
}