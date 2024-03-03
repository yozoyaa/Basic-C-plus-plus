/*For larger projects, organizing your code is key to maintainability and scalability:

Use Version Control: Tools like Git help manage code changes, collaborate with others, and keep track of different versions of your project.
Modularize Your Code: Break down your code into functions, classes, and modules. Each module should have a single responsibility.
Consistent Naming Conventions: Follow consistent naming conventions for variables, functions, classes, etc., to improve readability.
Documentation and Comments: Comment your code and document how to use your modules, functions, etc. It helps others understand your code and makes maintenance easier.
Writing Efficient C++ Code
Writing efficient C++ involves understanding both algorithmic complexity and how your code translates to low-level operations. Here are some tips:

Understand Data Structures and Algorithms: Choosing the right data structure or algorithm for the task can drastically improve performance.
Avoid Unnecessary Copies: Use references or pointers to pass large objects to functions. Consider using move semantics when applicable.
Resource Management: Use RAII (Resource Acquisition Is Initialization) to manage resources like memory, file handles, etc. Smart pointers (e.g., std::unique_ptr, std::shared_ptr) can help manage dynamic memory automatically.
Optimize Compile-Time Operations: Use constexpr for expressions that can be evaluated at compile time.
Profile Your Code: Before optimizing, use profiling tools to identify bottlenecks. Optimize based on evidence, not guesses.
Example of Using References to Avoid Copies:*/

#include <iostream>
#include <vector>

void processVector(const std::vector<int>& vec) { // Pass by reference to avoid copying
    // Process the vector without making a copy
    for (auto num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    processVector(myVector);
    return 0;
}
