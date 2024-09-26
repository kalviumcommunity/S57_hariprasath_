#include <iostream>
#include <string>
using namespace std;
#include "book.h"
#include "library.h"

void book()
{
    string title;
    string author;

    cin >> title;
    cin >> author;
    Book book(title, author);
    Library library;
    library.push_book_to_library(book);
    library.getBoks();
    // book.getDetails();
}
int main()
{
    book();
    return 0;
}
