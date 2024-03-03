// Dynamic memory allocation allows you to allocate memory during runtime using new and deallocate it using delete.

// Using new and delete : 

#include <iostream>

int main() {
    int *ptr = new int; // Dynamically allocating memory for an int
    *ptr = 10; // Assigning value to allocated memory
    std::cout << *ptr << std::endl; // Using the allocated memory

    delete ptr; // Deallocating the memory
    ptr = nullptr; // Good practice to avoid dangling pointer
    return 0;
}

// Dynamic Arrays : 

#include <iostream>

int main() {
    int *array = new int[5]; // Dynamically allocating an array of ints

    // Initializing array
    for (int i = 0; i < 5; ++i) {
        array[i] = i * 2;
    }

    // Using the array
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array; // Deallocating the dynamic array
    return 0;
}
