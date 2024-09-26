#include <iostream>
#include "library.h"

int main() {
    Library library;

    Book book1("The Catcher in the Rye", "J.D. Salinger");
    Book book2("To Kill a Mockingbird", "Harper Lee");
    Book book3("1984", "George Orwell");


    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);


    library.displayBooks();

    return 0;
}
