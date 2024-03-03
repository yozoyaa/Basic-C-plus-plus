// Object-Oriented Programming (OOP) is a fundamental concept in C++ that allows you to structure your software as a collection of objects that can contain both data and methods to work on that data. Let's explore the core OOP concepts in C++ with detailed explanations and examples.

// Classes and Objects
// Classes are user-defined types that serve as the blueprint for creating objects. Objects are instances of classes.

#include <iostream>

class Car { // Class definition
public:
    std::string brand;
    std::string model;
    int year;
};

int main() {
    Car car1; // Creating an object of the Car class
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    std::cout << car1.brand << " " << car1.model << " " << car1.year << std::endl;

    return 0;
}
