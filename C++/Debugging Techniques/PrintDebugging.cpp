#include <iostream>
#include <vector>
#include <climits> // Include this to define INT_MIN

int findMax(const std::vector<int>& nums) {
    if (nums.empty()) {
        std::cerr << "Error: The input vector is empty." << std::endl;
        return INT_MIN; // Now defined
    }

    int maxNum = nums[0];
    for (int num : nums) {
        if (num > maxNum) {
            maxNum = num;
            std::cout << "New max found: " << maxNum << std::endl; // Debug print
        }
    }
    return maxNum;
}

int main() {
    std::vector<int> myVector = {1, 3, 2, 5, 4};
    std::cout << "The maximum value is: " << findMax(myVector) << std::endl;
    return 0;
}
