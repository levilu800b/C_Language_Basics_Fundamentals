#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = 1;
    bool b = 0;
    bool result;

    result = a || b;

    printf("%d\n", result);
    return 0;
}