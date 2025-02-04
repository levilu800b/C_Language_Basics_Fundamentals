#include <stdio.h>

int main () {
    // Floating point variables from int to float

    // unsigned int iAmUnsignedInt = 0;

    // int n0 = 10;
    // int n1 = 3;
    // int n2 = n0 % n1;

    // float iAmFloat = (float)(n0) / (float)(n1);       // 4 bytes

    // Floating point variables as just float

    float n0f = 10;
    float n1f = 3;
    
    float iAmFloat = n0f / n1f;                         // 4 bytes

    printf("%f\n", iAmFloat);

    return 0;
}