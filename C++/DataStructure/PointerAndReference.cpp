// Pointers are variables that store the memory address of another variable. They are used for dynamic memory management, accessing array elements, and more.
// References are an alternative name for an existing variable. They are like constant pointers that are automatically dereferenced.

// Pointers : 

#include <iostream>

int main() {
    int value = 5;
    int *ptr = &value; // Pointer to the memory address of value

    std::cout << "Value: " << *ptr << ", Address: " << ptr << std::endl;
    return 0;
}

// References

#include <iostream>

int main() {
    int original = 30;
    int &ref = original; // Reference to original

    ref = 60; // Changes the value of original
    std::cout << "Original: " << original << std::endl;
    return 0;
}
