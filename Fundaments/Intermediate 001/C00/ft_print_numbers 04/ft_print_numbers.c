// Files to turn in : ft_print_numbers.c
// Allowed functions : write

// • Create a function that displays all digits, on a single line, by ascending order.
// • Here’s how it should be prototyped : 

// void ft_print_numbers(void);

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char digits;

    digits = '0';
    while(digits <= '9')
    {
        ft_putchar(digits);
        digits++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}