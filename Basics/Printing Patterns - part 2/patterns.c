#include <stdio.h>

int main () {
    const int screenResolution = 30 * 30;
    char frame[screenResolution];
    const char PIXEL_ON = '*';
    const char PIXEL_OFF = ' ';

    for (int i = 0; i < screenResolution; i++) {
        if (i % 3 == 0)
        {
            frame[i] = PIXEL_ON;
        }
        else if (i % 4 == 0)
        {
            frame[i] = PIXEL_ON;
        }
        else 
        {
            frame[i] = PIXEL_OFF;
        }
    }

    for (int i = 0; i < screenResolution; i++) {
        if (i % 30 == 0) {
            printf("\n");
        }
        printf("%c ", frame[i]);
    }

    return 0;
}