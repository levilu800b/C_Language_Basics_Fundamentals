#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    int numberOfPages;
};

int main () {
    struct Books Book1;
    strcpy(Book1.title, "This is my book name");
    strcpy(Book1.author, "Jack Benjamin");
    Book1.numberOfPages = 100;

    printf("%s\n", Book1.title);

    return 0;
}