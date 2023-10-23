// Write a C program to get the C version you are using.

//     Expected Output :

//     We are using C18 !

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
// Check for C standard version
#if __STDC_VERSION__ >= 201710L
    write(1, "We are using C18!\n", 17);
#elif __STDC_VERSION__ >= 201112L
    write(1, "We are using C11!\n", 17);
#elif __STDC_VERSION__ >= 199901L
    write(1, "We are using C99!\n", 17);
#else
    write(1, "We are using C89/C90!\n", 17);
#endif

    return 0;
}