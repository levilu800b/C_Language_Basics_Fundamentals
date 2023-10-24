// Create a function that counts and returns the number of characters in a string.
// • Here’s how it should be prototyped : 
// int ft_strlen(char *str);

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        str++;
    }
}

int main()
{
    int *str;

    str = "Hello, World!";
    printf("%d\n", ft_strlen(str[i]));
    return (0);
}