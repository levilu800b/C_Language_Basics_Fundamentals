#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    // _Bool boolVar = 0;
    bool boolVar1 = true;
    bool boolVar0 = false;

    printf("integerVar: %d\n floatingVar: %f\n doubleVar: %lf\n boolVar0: %d\n boolVar1: %d\n charVar: %c\n",
           integerVar, floatingVar, doubleVar, boolVar0, boolVar1, charVar);

    return 0;
}