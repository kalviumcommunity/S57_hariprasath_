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
    void push_book_to_library(const Book &book)
    {
        books.push_back(book);
    }
    void push_books_to_library(const Book book[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            this->push_book_to_library(book[i]);
        }
    };
    void book()
    {
        for (const auto &book : books)
        {
            book.getDetails();
        }
    }
    void book_size()
    {
        int *size = new int;
        *size = books.size();
        cout
            << "memory allocated loaction value : " << *size << endl;
        delete size;
        size = nullptr;
    }
};

#endif