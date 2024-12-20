#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    int* pages; // numărul de pagini, alocat dinamic

public:
    // Constructor cu valori implicite
    Book(const std::string& title = "Necunoscut", const std::string& author = "Necunoscut", int pages = 0);

    // Copy constructor
    Book(const Book& other);

    // Move constructor
    Book(Book&& other) noexcept;

    // Destructor
    ~Book();

    // Getters și Setters (încapsulare)
    std::string getTitle() const;
    std::string getAuthor() const;
    int getPages() const;
    void setPages(int pages);

    // Funcție de afișare (pentru testare)
    void display() const;
};

#endif
