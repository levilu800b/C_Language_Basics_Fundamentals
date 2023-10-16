#include <stdio.h>

int addNumbers(int n1, int n2)
{
    return n1 + n2;
}

int getAverage(int n1, int n2)
{
    return (n1 + n2) / 2;
}


int main () {

    int sum = addNumbers(10, 15);

    printf("Sum is: %d\n", sum);

    // printf("The average is: %d\n", getAverage(100, 15));

    int average = getAverage(100, 15);
    printf("The average is: %d\n", average);

    return 0;
}