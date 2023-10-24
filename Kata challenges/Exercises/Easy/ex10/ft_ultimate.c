// Create a function that takes a pointer to pointer to pointer to pointer to pointer
//     to pointer to pointer to pointer to pointer to int as a parameter and sets the value
//     "42" to that int.
// • Here’s how it should be prototyped : 
// void ft_ultimate_ft(int *********nbr);

#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int nbr;
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;

    nbr = 0;
    p1 = &nbr;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    p6 = &p5;
    p7 = &p6;
    p8 = &p7;
    p9 = &p8;

    ft_ultimate_ft(p9);
    write(1, ft_ultimate_ft, 1);
    return (0);
}