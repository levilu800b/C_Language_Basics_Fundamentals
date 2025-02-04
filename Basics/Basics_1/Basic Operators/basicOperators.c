#include <stdio.h>

int count = 0;

// void myMethod()
// {
//     if (count == 3)
//     {
//         printf("%d\n", count);
//     }

//     count++;
// }

// void myMethod()
// {
//     static int count = 0;
//     if (count > 4 && count < 8)
//     {
//         printf("%d\n", count);
//     }

//     count++;
// }

void myMethod()
{
    if (count == 4 || count == 8)
    {
        printf("%d\n", count);
    }
    else if (count == 5)
    {
        printf("It is 5 \n");
    }
    else
    {
        printf("It is not 4 or 8 or 5 \n");
    }

    count++;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        myMethod();
    }
    return 0;
}