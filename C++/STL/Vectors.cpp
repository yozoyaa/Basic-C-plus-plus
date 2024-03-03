// Vectors are sequence containers representing arrays that can change in size.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    myVector.push_back(6); // Adds an element to the end

    // Access and print elements
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
