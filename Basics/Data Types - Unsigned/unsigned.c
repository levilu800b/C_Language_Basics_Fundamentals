#include <stdio.h>

int main() {
    // defining a char to store as an integer or a number
    unsigned char iAmUnsignedChar = 0; 

    // for(int i = 0; i < 1000; i++)
    // {
    //     printf("iAmUnsignedChar: %d\n", iAmUnsignedChar);
    //     iAmUnsignedChar++;
    // }

    // Reassigning the char to store as a single character
    iAmUnsignedChar = 'A';
    printf("%c\n", iAmUnsignedChar);

    return 0;
}