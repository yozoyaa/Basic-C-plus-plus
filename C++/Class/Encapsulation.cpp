// Encapsulation is the concept of bundling data (attributes) and methods (functions) that work on the data into a single unit or class and restricting access to some of the object's components. This is usually done using access specifiers: public, private, and protected.

// Public members are accessible from anywhere outside the class.
// Private members are accessible only from within the class.
// Protected members are accessible within the class and by derived class.

#include <iostream>

class EncapsulatedCar {
private:
    std::string brand;
public:
    void setBrand(std::string b) {
        brand = b;
    }
    std::string getBrand() {
        return brand;
    }
};

int main() {
    EncapsulatedCar myCar;
    myCar.setBrand("Ford");
    std::cout << myCar.getBrand() << std::endl;

    return 0;
}
