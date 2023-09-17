#include <stdio.h>

#define lEnd '\0'
#define nLine '\n'

/*
    equals method requires the first string 
    to have a null terminator (lEnd) as its
    last character, and it also requires the
    second string to end with a new line(nLine)
*/

int equals(char *s0, char *s1)
{
    int i = 0;
    while (s0[i] != lEnd)
    {
        if (s0[i] != s1[i])
        {
            return 0;
        }
        i++;
    }
    if(s1[i] != nLine)
    {
        return 0;
    }
    return 1;
}

int main()
{
    const int INPUT_SIZE = 20;
    char input[INPUT_SIZE];
    fgets(input, INPUT_SIZE, stdin);
    if(equals("Hello", input))
    {
        printf("%s\n", "correct");
    } else if(equals("exit", input))
    {
        printf("%s\n", "you typed exit");
    }

    return 0;
}
