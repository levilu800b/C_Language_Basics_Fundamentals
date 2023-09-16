#include <stdio.h>

int addNumbers(int n1, int n2)
{
    return n1 + n2;
}

int getAverage(int n1, int n2)
{
    return (n1 + n2) / 2;
}

char isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}


int main () {

    int sum = addNumbers(10, 15);

    printf("Sum is: %d\n", sum);

    // printf("The average is: %d\n", getAverage(100, 15));

    int average = getAverage(100, 15);
    printf("The average is: %d\n", average);

    // if (isPrime(20))
    // {
    //     printf("It is prime number\n");
    // }
    // else
    // {
    //     printf("It is not prime number\n");
    // }

    int numberToBeChecked = 101;

    if (isPrime(numberToBeChecked))
    {
        printf("It is prime number\n");
    }
    else
    {
        printf("It is not prime number\n");
    }

    return 0;
}