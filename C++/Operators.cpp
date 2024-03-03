#include <iostream>

int main() {
    int a = 5, b = 3;

    std::cout << "A + B = " << (a + b) << std::endl;
    std::cout << "A - B = " << (a - b) << std::endl;

    std::cout << "a > b = " << (a > b) << std::endl;

    bool condition1 = true;
    bool condition2 = false;
    std::cout << "Condition1 && Condition2 = " << (condition1 && condition2) << std::endl;
    std::cout << "Condition1 || Condition2 = " << (condition1 || condition2) << std::endl;

    return 0;
}