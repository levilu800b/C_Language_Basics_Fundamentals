// Files to turn in : ft_putchar.c
// Allowed functions : write

// • Write a function that displays the character passed as a parameter.
// • It will be prototyped as follows : 

// void ft_putchar(char c);

// To display the character, you must use the write function as follows.

// write(1, &c, 1);

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putchar('c');
    return (0);
}