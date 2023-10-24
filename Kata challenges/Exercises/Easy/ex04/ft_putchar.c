// Write a function that displays the character passed as a parameter.
// • It will be prototyped as follows : 
// void ft_putchar(char c);
// To display the character, you must use the write function as follows.
// write(1, &c, 1);

#include <unistd.h>

void    ft_purchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_purchar('A');
    write(1, "\n", 1);
    ft_purchar('H');
    write(1, "\n", 1);
    return (0);
}