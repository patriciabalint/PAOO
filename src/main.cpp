#include "Book.h"

int main() {
    // Crearea unei cărți (constructor normal)
    Book b1("1984", "George Orwell", 328);
    b1.display();

    // Crearea unei copii a cărții (copy constructor)
    Book b2 = b1;
    b2.display();

    // Mutarea unei cărți (move constructor)
    Book b3 = std::move(b1);
    b3.display();

    // Modificarea unei cărți (setters și getters)
    b3.setPages(400);
    b3.display();

    // Destructorii sunt apelați automat la final
    return 0;
}
