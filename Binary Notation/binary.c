#include <stdio.h>

int main () {
    // DECIMAL           0123456789
    // HEXADECIMAL       0123456789ABCDEF
    // BINARY            01

   unsigned char number = 0b11111111;

// decrement numbers
// It could also work for addition, multiplication, division and modules.
   number -= 1;
   // number--;
    // number = number - 1;

    printf("%d \n", number);

    return 0;
}