#include <stdio.h>

int main () {
    // POINTERS
    int a = 10;
    int *addressOfN = &a;
    printf("address of a:%x\a", addressOfN);
    // printf("value at addressOfN:%d\a", *addressOfN);

    return 0;
}