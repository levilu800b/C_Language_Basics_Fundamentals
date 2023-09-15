#include <stdio.h>

int main () {
    register int loopCount = 0;

    while (loopCount < 100) {
        loopCount++;
    }

    printf("%d \n", loopCount);

    return 0;
}