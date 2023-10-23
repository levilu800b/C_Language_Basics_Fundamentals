// Write a C program to print your name, date of birth, and mobile number.

//     Expected Output :

//     Name : Alexandra Abramov 
//     DOB : July 14,
//     1975 Mobile : 99 - 9999999999

#include <unistd.h>

int main()
{
    write(1, "Name : Alexandra Abramov", 24);
    write(1, "\n", 1);
    write(1, "DOB : July 14, 1975", 19);
    write(1, "\n", 1);
    write(1, "Mobile : 99-99999999999", 22);
    write(1, "\n", 1);
    return (0);
}