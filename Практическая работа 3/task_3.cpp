#include <iostream>

int main() {
    unsigned long long number;
    std::cin >> number;
    std::cout << (number % 100) / 10 << '\n';
}
