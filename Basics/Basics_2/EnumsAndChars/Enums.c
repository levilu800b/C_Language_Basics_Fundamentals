#include <stdio.h>

int main()
{
    enum gender {Female, Male};

    enum gender myGender;

    myGender = Male;

    printf("My gender is: %d\n", myGender);

    enum gender anotherGender;

    anotherGender = Female;

    printf("Your gender is: %d\n", anotherGender);

    return 0;
}