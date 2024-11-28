#include <iostream>

int main() {
    // A string variable initialized
    std::string brain = "HI THIS IS BRAIN";

    // A pointer to the string
    std::string* stringPTR = &brain;

    // A reference to the string
    std::string& stringREF = brain;

    // Print the memory addresses
    std::cout << "Memory address of the string variable: " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Print the values
    std::cout << "Value of the string variable: " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
