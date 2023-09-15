#include <stdio.h>

int main () {
    // DECIMAL           0123456789
    // HEXADECIMAL       0123456789ABCDEF
    // BINARY            01

// Defining constant variables 
   const unsigned char number = 0b11111111;

    printf("%d \n", number);

    return 0;
}