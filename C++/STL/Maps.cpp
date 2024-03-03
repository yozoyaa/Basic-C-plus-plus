// Maps are associative containers that store elements formed by a combination of a key value and a mapped value.

#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> myMap;
    myMap["apple"] = 50;
    myMap["banana"] = 30;
    myMap["cherry"] = 20;

    for (const auto &pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
