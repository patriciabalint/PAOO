#include "Book.h"

int main() {
    // Crearea unei cărți folosind constructorul cu valori implicite
    Book b1;  // va folosi valorile implicite: "Necunoscut", "Necunoscut", 0
    b1.display();

    // Crearea unei cărți cu date explicite
    Book b2("1984", "George Orwell", 328);
    b2.display();

    // Crearea unei copii a cărții (copy constructor)
    Book b3 = b2;
    b3.display();

    // Mutarea unei cărți (move constructor)
    Book b4 = std::move(b2);
    b4.display();

    // Modificarea unei cărți (setters și getters)
    b4.setPages(400);
    b4.display();

    // Destructorii sunt apelați automat la final
    return 0;
}
