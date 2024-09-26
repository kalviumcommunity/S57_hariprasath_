#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    // Constructor to initialize book details
    Book(std::string title, std::string author) {
        this->title = title;  // Using 'this' pointer to differentiate member variables
        this->author = author;
    }

    // Method to display book details
    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }
};

#endif
