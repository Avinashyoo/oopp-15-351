#include <iostream>
#include <vector>
#include <string>

int main() {
    // 1. Initialize a collection (vector) of strings
    std::vector<std::string> languages = {"C++", "Python", "Java", "Rust", "JavaScript"};

    std::cout << "--- Traversing a Collection of Strings ---" << std::endl;

    // 2. Using range-based for loop and 'auto' for type deduction (by reference for efficiency)
    for (const auto& lang : languages) {
        std::cout << lang << std::endl;
    }

    // 3. Initialize a collection of integers
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "\n--- Traversing a Collection of Integers ---" << std::endl;

    // Using 'auto' where the compiler automatically deduces the type as 'int'
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}