#include <iostream>
#include <string>
using namespace std;
#include "book.h"
#include "library.h"
#include "ebook.h"

void book()
{
    string title;
    string author;

    cin >> title;
    cin >> author;
    Book books[4] = {
        Book(title, author),
        Book(title, author),
        Book(title, author),
        Book(title, author),
    };
    Library library;
    library.push_books_to_library(books, 4);
    library.book();
    library.book_size();
    books->count_of_book();

    Ebook ebook(20);
    ebook.getDetails();
    books->bookType();
    ebook.bookType();
    // book.getDetails();
}
Book::count = 0;
int main()
{
    book();
    return 0;
}
