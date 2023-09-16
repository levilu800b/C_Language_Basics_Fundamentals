#include <stdio.h>

int main () {
    char str[20];
    fgets(str, 20, stdin);

    printf("%s\n", str);

    // null terminator
    char nullTerminator = '\0';
    str[7] = nullTerminator;

    printf("%s\n", str);

    return 0;
}