#include <iostream>

int globalVar = 10;

void printLocalAndGlobal() {
    int localVar = 20;
    std::cout << "Local variable: " << localVar << std::endl;
    std::cout << "Global variable: " << globalVar << std::endl;
}

int main() {
    printLocalAndGlobal();
    std::cout << "Accessing global variable in main: " << globalVar << std::endl;
    return 0;
}