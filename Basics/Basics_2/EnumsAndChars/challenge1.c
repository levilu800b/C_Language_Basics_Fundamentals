#include <stdio.h>

int main ()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company firstCompany;

    firstCompany = XEROX;

    enum Company secondCompany;

    secondCompany = GOOGLE;

    enum Company thirdCompany;

    thirdCompany = EBAY;

    printf("Value of first Company is: %d\n", firstCompany);
    printf("Value of second Company is: %d\n", secondCompany);
    printf("Value of third Company is: %d\n", thirdCompany);
    
    return 0;
}