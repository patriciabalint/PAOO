#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
private:
    int myAttribute;

public:
    MyClass(int value);

    void setMyAttribute(int value);

    int getMyAttribute() const;
};

#endif // MYCLASS_H