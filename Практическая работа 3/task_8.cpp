#include <iostream>

int main() {
    int number;
    std::cin >> number;
    const int reversed = (number % 10) * 1000 + (number / 10 % 10) * 100
                       + (number / 100 % 10) * 10 + number / 1000;
    std::cout << (number == reversed) << '\n';
}
