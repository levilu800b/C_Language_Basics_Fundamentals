// Create a function that displays all digits, on a single line, by ascending order.
// • Here’s how it should be prototyped : 
// void ft_print_numbers(void);

#include <unistd.h>

void    ft_print_numbers(void)
{
    write(1, "0123456789", 11);
}

int main(void)
{
    ft_print_numbers();
    return (0);
}