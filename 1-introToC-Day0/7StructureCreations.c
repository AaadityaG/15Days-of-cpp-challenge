#include <stdio.h>

struct complex
{
    double re;
    double im;
}typedef com;

struct _books
{
    char title[50];
    char author[50];
    int book_id;

}typedef books;


int main()
{
    com x = {2.0, 3.0};
    books bb = {"Pcycology of money", "Unknown for me!"};
    bb.book_id = 10;
    return 0;
}