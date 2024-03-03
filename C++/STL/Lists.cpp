// Lists are sequence containers that allow non-contiguous memory allocation and efficient insertions and deletions.

#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};
    myList.push_back(6); // Adds an element to the end

    // Iterating over list and print elements
    for (int elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
