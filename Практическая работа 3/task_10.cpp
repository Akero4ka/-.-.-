#include <iostream>

int main() {
    int first, second;
    std::cin >> first >> second;
    // Для разности от -999 до 999 деление на 1000 даёт 0 или 1.
    const int chooseSecond = (second - first + 1000) / 1000;
    std::cout << first + (second - first) * chooseSecond << '\n';
}
