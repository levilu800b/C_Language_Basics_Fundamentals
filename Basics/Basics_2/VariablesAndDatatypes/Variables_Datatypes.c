#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;

    // _Bool boolVar = 0;
    bool boolVar1 = true;
    bool boolVar0 = false;

    printf("integerVar: %d\nfloatingVar: %f\ndoubleVar: %lf\nboolVar0: %d\nboolVar1: %d\n",
           integerVar, floatingVar, doubleVar, boolVar0, boolVar1);

    return 0;
}