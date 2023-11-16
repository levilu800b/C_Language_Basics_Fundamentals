// Files to turn in : ft_print_reverse_alphabet.c
// Allowed functions : write

// • Create a function that displays the alphabet in lowercase, on a single line, by descending order, starting from the letter ’z’.
// • Here’s how it should be prototyped :

// void ft_print_reverse_alphabet(void);

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char letter;

    letter = 'z';
    while(letter >= 'a')
    {
        ft_putchar(letter);
        letter--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}