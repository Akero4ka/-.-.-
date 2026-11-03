#include <iostream>

int main() {
    long long speed, hours;
    std::cin >> speed >> hours;
    // Остатки до умножения позволяют избежать переполнения пути.
    const long long mark = (speed % 109) * (hours % 109) % 109;
    std::cout << (mark + 109) % 109 << '\n';
}
