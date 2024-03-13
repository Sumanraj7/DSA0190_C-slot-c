#include <iostream>
#include <stdexcept>

int safeDivide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Error: Divide by zero");
    }
    return numerator / denominator;
}

int main() {
    int numerator, denominator;

    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    try {
        int result = safeDivide(numerator, denominator);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
