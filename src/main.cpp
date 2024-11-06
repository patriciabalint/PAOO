#include <iostream>
#include "MyClass.h"

int main() {
    MyClass obj(10);

    std::cout << "Valoarea inițială: " << obj.getMyAttribute() << std::endl;

    obj.setMyAttribute(20);

    std::cout << "Noua valoare: " << obj.getMyAttribute() << std::endl;

    return 0;
}