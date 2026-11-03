#include <iostream>

int main() {
    long long number;
    std::cin >> number;
    // Нормализация остатка учитывает отрицательные нечётные числа.
    std::cout << number + 2 - (number % 2 + 2) % 2 << '\n';
}
