#include <stdio.h>
#include <unistd.h>

int main () {
    const int screenResolution = 30 * 30;
    char frame[screenResolution];
    const char PIXEL_ON = '*';
    const char PIXEL_OFF = ' ';

    int firstValue = 3;
    int secondValue = 4;

    printFrame:

    for (int i = 0; i < screenResolution; i++) {
        if (i % firstValue == 0)
        {
            frame[i] = PIXEL_ON;
        }
        else if (i % secondValue == 0)
        {
            frame[i] = PIXEL_ON;
        }
        else 
        {
            frame[i] = PIXEL_OFF;
        }
    }

    firstValue++;
    secondValue++;

    for (int i = 0; i < screenResolution; i++) {
        if (i % 30 == 0) {
            printf("\n");
        }
        printf("%c ", frame[i]);
    }
    printf("\n");

    sleep(1);

    goto printFrame;

    return 0;
}