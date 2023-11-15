#include <stdio.h>

int main() {
    char iAmChar = 0;                      //1 byte == 8 bits
    short iAmShort = -4;                    //2 bytes == 16 bits
    int iAmInt = 123;                       //4 bytes == 32 bits
    long long iAmLongLong = 1000000000;     //8 bytes == 64 bits


    for(int i = 0; i < 1000; i++)
    {
        printf("iAmChar: %c\n", iAmChar);
        printf("iAmShort: %hd\n", iAmShort);
        printf("iAmInt: %d\n", iAmInt);
        printf("iAmLongLong: %lld\n", iAmLongLong);
        iAmChar++;
        iAmShort++;
        iAmInt++;
        iAmLongLong++;
    }

    return 0;
}