#include "Book.h"

// Constructor normal (cu valori implicite)
Book::Book(const std::string& title, const std::string& author, int pages)
    : title(title), author(author) {
    this->pages = new int(pages); // Alocare dinamică
    std::cout << "Constructor apelat pentru cartea \"" << title << "\".\n";
}

// Copy constructor
Book::Book(const Book& other)
    : title(other.title), author(other.author) {
    this->pages = new int(*(other.pages)); // Copierea valorii
    std::cout << "Copy constructor apelat pentru cartea \"" << title << "\".\n";
}

// Move constructor
Book::Book(Book&& other) noexcept
    : title(std::move(other.title)), author(std::move(other.author)), pages(other.pages) {
    other.pages = nullptr; // Resursa mutată, pointerul sursă devine null
    std::cout << "Move constructor apelat pentru cartea \"" << title << "\".\n";
}

// Destructor
Book::~Book() {
    if (pages) {
        delete pages; // Eliberare memorie
        std::cout << "Destructor apelat pentru cartea \"" << title 
                  << "\". Memoria pentru pagini a fost eliberată.\n";
    }
}

// Getters
std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getPages() const {
    return *pages;
}

// Setter
void Book::setPages(int pages) {
    *(this->pages) = pages;
}

// Funcție de afișare
void Book::display() const {
    std::cout << "Cartea \"" << title << "\" de " << author
              << " are " << *pages << " pagini.\n";
}
