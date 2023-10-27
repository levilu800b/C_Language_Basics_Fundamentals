// • Reproduce the behavior of the function strcpy(man strcpy).
// • Here’s how it should be prototyped : 
// char *ft_strcpy(char *dest, char *src);

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char dest[20];
    char src[] = "Hello World!";
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    return (0);
}