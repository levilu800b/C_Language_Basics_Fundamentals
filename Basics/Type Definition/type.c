#include <stdio.h>

typedef unsigned char byte;

#define TRUE 1
#define FALSE 0

int main() {
    unsigned char iAm8bits = 0;
    byte iAm8bitsToo = 1;
    if (iAm8bitsToo == TRUE)
    {
        printf("I am 8 bits too\n");
    }
    else
    {
        printf("I am not 8 bits\n");
    }

    return 0;
}