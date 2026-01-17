#include <iostream>
#include <string>

int main() {
    int number;
    float decimal;
    std::string word;

    std::cout << "Enter an integer, a float, and a single word: ";
    std::cin >> number >> decimal >> word;

    std::cout << "Integer: " << number << std::endl;
    std::cout << "Float: " << decimal << std::endl;
    std::cout << "Word: " << word << std::endl;

    return 0;
}
