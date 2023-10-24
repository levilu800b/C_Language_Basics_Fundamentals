// Create a function ft_ultimate_div_mod with the following prototype : 
// void ft_ultimate_div_mod(int *a, int *b);
// • This function divides parameters a by b.The result of this division is stored in 
// the int pointed by a.The remainder of the division is stored in the int pointed by b.

#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int main(void)
{
    int a;
    int b;

    a = 24;
    b = 5;

    ft_ultimate_div_mod(&a, &b);
    printf("a: %d\n b: %d\n", a, b);
    return (0);
}