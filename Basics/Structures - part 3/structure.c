#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    int numberOfPages;
};

struct Square
{
    int x0;
    int y0;
};

struct Circle
{
    int x0;
    int y0;
    int radius;
};

void modifyBook(struct Books *book);

int main()
{
    struct Books Book1;
    strcpy(Book1.title, "This is my book name");
    strcpy(Book1.author, "Jack Benjamin");
    Book1.numberOfPages = 100;

    printf("%s\n", Book1.title);

    modifyBook(&Book1);

    printf("%s\n", Book1.title);

    return 0;
}

void modifyBook(struct Books *book)
{
    strcpy(book->title, "modified title");
}
