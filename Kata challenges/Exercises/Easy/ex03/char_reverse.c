// Write a C program to print the following characters in reverse.
// Test Characters : 'X', 'M', 'L' 
// Expected Output : The reverse of XML is LMX

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void *rev_char(char *str)
{
    int i = 0;

    // Find the end of the string
    while (str[i] != '\0')
    {
        i++;
    }

    // Decrement i to point to the last character
    i--;

    // Traverse the string in reverse and print each character
    while (i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
    return (0);
}

int main(void)
{
    rev_char("X M L");
    write(1, "\n", 1);
    rev_char("Rainbow dash");
    write(1, "\n", 1);
    rev_char("");
    write(1, "\n", 1);
    return (0);
}