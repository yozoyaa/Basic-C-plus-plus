/*Debugging Techniques
Debugging is the process of identifying and removing errors from computer programs. Here are some basic debugging techniques in C++:

Use a Debugger: Most IDEs have an integrated debugger. Learn to set breakpoints, step through code, inspect variables, and evaluate expressions at runtime.
Print Debugging: Although primitive, adding print statements to your code can help trace the flow of execution and inspect variable values at various points.
Static Analysis Tools: Use static analysis tools to detect potential errors in your code before running it. Tools like Clang Static Analyzer or cppcheck can help find bugs.*/

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
