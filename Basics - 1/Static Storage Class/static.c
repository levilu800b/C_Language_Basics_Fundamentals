#include <stdio.h>

// Cannot be accessed from outside of this file we use static
// static int n = 0;   

// Can be accessed from outside of this file we use extern 
// extern int n = 0;

void myMethod()
{
    // Defining a static variable
    static int count = 0;
    printf("%d \n", count);
    count++;
}

int main () {
   for (int i = 0; i < 10; i++) {
         myMethod();
   }
    return 0;
}