// Create a function that displays the alphabet in lowercase, on a single line, by descending order, starting from the letter ’z’.
// • Here’s how it should be prototyped : 
// void ft_print_reverse_alphabet(void);

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    write(1, "zyxwvutsrqponmlkjihgfedcba", 27);
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}