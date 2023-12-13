#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// void    ft_is_negative(int n)
// {
//     if(n < 0)
//     {
//         ft_putchar('N');
//     }
//     else
//     {
//         ft_putchar('P');
//     }
// }

void    ft_is_negative(int n)
{
    x = n < 0 ? 'N' : 'P'
    ft_putchar(x);
}

int main(void)
{
    ft_is_negative(-1);
    return (0);
}