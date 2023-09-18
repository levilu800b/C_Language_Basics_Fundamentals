#include <stdio.h>

int main() {
    FILE *myFile = fopen("myFile.txt", "wb");
    char *myString = "Hello file!";
    fwrite(myString, 10, 1, myFile);
    // fwrite(myString, sizeof(char), sizeof(myString), myFile);
    fclose(myFile);

    FILE *readFile = fopen("myFile.txt", "rb");
    char readString[11];
    fread(readString, 10, 1, readFile);
    fclose(readFile);
    readString[10] = '\0';

    printf("%s\n", readString);

    return 0;
}