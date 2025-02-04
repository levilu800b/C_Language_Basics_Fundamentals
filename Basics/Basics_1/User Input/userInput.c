#include <stdio.h>

int main () {

    const int INPUT_SIZE = 20;
    char input[INPUT_SIZE];
    fgets(input, INPUT_SIZE, stdin);

    printf("%s", input);

    return 0;
}