// Create a function ft_div_mod prototyped like this : 
// void ft_div_mod(int a, int b, int *div, int *mod);
// • This function divides parameters a by b and stores the result in the int pointed by
//     div.It also stores the remainder of the division of a by b in the int pointed by mod.

#include <unistd.h>
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a;
    int b;
    int mod;
    int div;

    a = 24;
    b = 5;

    ft_div_mod(a, b, &div, &mod);
    printf("a: %d\nb: %d\ndiv: %d\nmod: %d\n", a, b, div, mod);
    return (0);
}