// Arrays are used to store multiple values of the same type in a single variable, accessed with an index.

#include <iostream>

int main() {
    int myArray[5] = {1, 2, 3, 4, 5}; // Declaring and initializing an array
    std::cout << "The third element is: " << myArray[2] << std::endl; // Arrays are zero-indexed
    return 0;
}
