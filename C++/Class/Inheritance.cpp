// Inheritance allows a class to inherit properties and methods from another class. The class that inherits is called the derived class, and the class it inherits from is called the base class.

#include <iostream>

class Vehicle { // Base class
public:
    std::string brand = "Ford";
    void honk() {
        std::cout << "Tuut, tuut!" << std::endl;
    }
};

class Car: public Vehicle { // Derived class
public:
    std::string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    std::cout << myCar.brand << " " << myCar.model << std::endl;

    return 0;
}
