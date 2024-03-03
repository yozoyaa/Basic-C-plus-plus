// Structs are user-defined types that allow for grouping variables of different types together.

#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person person1;
    person1.name = "John";
    person1.age = 30;

    std::cout << person1.name << " is " << person1.age << " years old." << std::endl;
    return 0;
}
