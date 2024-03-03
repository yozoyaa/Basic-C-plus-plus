#include <iostream>
#include <vector>
#include <algorithm> // Include for find()

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    auto it = std::find(myVector.begin(), myVector.end(), 3);

    if (it != myVector.end()) {
        std::cout << "Element found: " << *it << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}
