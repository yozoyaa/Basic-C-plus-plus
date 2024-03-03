// The STL provides a set of common algorithms to perform operations like searching, sorting, counting, etc., on containers.

#include <iostream>
#include <vector>
#include <algorithm> // Include for sort()

int main() {
    std::vector<int> myVector = {5, 3, 2, 4, 1};
    std::sort(myVector.begin(), myVector.end());

    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
