#include <iostream>

int main() {
    // Разность должна помещаться в long long.
    long long first, second;
    std::cin >> first >> second;
    first -= second;
    second += first;
    first = second - first;
    std::cout << first << ' ' << second << '\n';
}
