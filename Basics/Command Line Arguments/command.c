#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 2) 
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if(argc > 2) 
    {
        printf("Too many arguments supplied.\n");
    }
    else 
    {
        printf("One argument expected.\n");
    }

    printf("%s\n", argv[1]);


    FILE *myFile = fopen("myFile.txt", "wb");
    char *myString = "Hello file!";
    fwrite(myString, 10, 1, myFile);
    // fwrite(myString, sizeof(char), sizeof(myString), myFile);
    fclose(myFile);

    FILE *readFile = fopen("myFile.txt", "rb");
    if (readFile == NULL)
    {
        printf("Error Number: %d\n", errno);
        perror("Error");
        return 0;
    }
    char readString[11];
    fread(readString, 10, 1, readFile);
    fclose(readFile);
    readString[10] = '\0';

    printf("%s\n", readString);

    // sleep(1);         // recursion
    // main();

    return 0;
}