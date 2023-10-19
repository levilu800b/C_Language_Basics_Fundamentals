#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int point;

    point = *a;
    *a = *b;
    *b = point;
}

int main(void)
{
    int a;
    int b;

    a = 42;
    b = 24;
    ft_swap(&a, &b);
    printf("a: %d\nb: %d\n", a, b);
    return (0);
}