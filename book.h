#ifndef BOOK_H // check the header file is not exist ?
#define BOOK_H // if not exist create BOOK_H to prevent from file explosion

#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;

public:
    Book(string title, string author) : title(title), author(author) {}
    Book(string title, string author)
    {
        this->title = title;
        this->author = author;
    }
    void getDetails() const
    {
        cout << title << author << endl;
    }
}

#endif