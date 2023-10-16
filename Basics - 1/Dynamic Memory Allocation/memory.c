#include <stdio.h>
#include <stdlib.h>

// Malloc

int main () {
    const int memSize = 1000000000;
    char *memory = malloc(memSize);
    for (int i = 0; i < memSize; i++)
    {
        memory[i] = 'a';
    }
    printf("Memory allocated was filled with A's\n");

    // free memory if you don't need it anymore
    free(memory);

    return 0;
}

// Calloc

// int main()
// {
//     const int memSize = 100000000;
//     int *memory = calloc(memSize, 4);
//     for (int i = 0; i < memSize; i++)
//     {
//         memory[i] = 'a';
//     }
//     printf("Memory allocated was filled with A's\n");

    // free memory if you don't need it anymore
//     free(memory);

//     return 0;
// }
