#include <stdio.h>

int main ()
{
    double width = 32.3;
    double height = 15.3;
    double perimeter;
    double area;

    perimeter = 2.0 * (height + width);

    area = width * height;

    printf("The perimeter of the rectangle is: %lf\n", perimeter);

    printf("The area of the rectangle is: %lf\n", area);
    
    return 0;
}