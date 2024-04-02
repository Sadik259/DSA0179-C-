#include <iostream>
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "The number is " << (number % 3 == 0 ? "divisible by 3" : "not divisible by 3") << std::endl;
    return 0;
}

