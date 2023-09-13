#include <stdio.h>

int main() {
    unsigned char iAmUnsignedChar = 0; // defining a char as an int

    // for(int i = 0; i < 1000; i++)
    // {
    //     printf("iAmUnsignedChar: %d\n", iAmUnsignedChar);
    //     iAmUnsignedChar++;
    // }

    // Reassigning the char as a character
    iAmUnsignedChar = 'A';
    printf("%c\n", iAmUnsignedChar);

    return 0;
}