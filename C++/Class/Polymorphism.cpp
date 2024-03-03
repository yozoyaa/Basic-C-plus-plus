// Polymorphism allows methods to do different things based on the object it is acting upon. In C++, polymorphism is achieved through function overloading and overriding.

// Function Overloading: Same function name with different parameters.
// Function Overriding: Redefining a base class method in a derived class.

// Example of Function Overloading:

#include <iostream>

class Print {
public:
    void show(int i) {
        std::cout << "Integer: " << i << std::endl;
    }
    void show(double d) {
        std::cout << "Double: " << d << std::endl;
    }
};

int main() {
    Print print;
    print.show(1);
    print.show(3.14);

    return 0;
}

// Example of Function Overriding:

#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "Base function" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override { // Overrides the base class print function
        std::cout << "Derived function" << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derived;
    basePtr = &derived;

    basePtr->print(); // Calls Derived's version of print()

    return 0;
}
