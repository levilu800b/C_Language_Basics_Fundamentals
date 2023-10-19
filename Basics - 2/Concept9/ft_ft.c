#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int nbr;

    nbr = 0;
    ft_ft(&nbr);
    write(1, ft_ft, 1);
    return (0);
}