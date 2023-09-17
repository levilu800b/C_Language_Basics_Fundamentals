#include <stdio.h>

int main () {
    /*
    Pointers:
    - A pointer is a variable that stores the address of another variable.
    - It can be used to access and modify variables in memory, without knowing their actual addresses (which may change).
    or
    - A pointer is a variable whose value is the address of another variable.
    - A pointer is declared by placing a * in front of the variable name.
    - A pointer can be dereferenced by placing a * in front of the pointer name.
    - A pointer can be assigned the address of another variable by using the & operator.
    - A pointer can be assigned the address of another pointer by using the & operator.
    */
    int a = 10;
    int *addressOfN = &a;
    printf("address of a:%x\n", addressOfN);
    // printf("value at addressOfN:%d\a", *addressOfN);

    char *string = "hello world";

    printf("%s\n", string);

    printf("%c\n", string[2]);

    printf("%u\n", string);

    printf("%u\n", &string);

    return 0;
}