#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
using namespace std;
#include "book.h"
#include <vector>
class Library
{
private:
    vector<Book> books;

public:
    void push_book_to_library(const Library &book)
    {
        books.push_back(book);
    }
    void getBoks()
    {
        cout << books << endl;
    }
}

#endif