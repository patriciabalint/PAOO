#include "MyClass.h"

MyClass::MyClass(int value) : myAttribute(value) {}

void MyClass::setMyAttribute(int value) {
    myAttribute = value;
}

int MyClass::getMyAttribute() const {
    return myAttribute;
}