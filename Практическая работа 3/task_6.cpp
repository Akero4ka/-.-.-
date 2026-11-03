#include <iostream>

int main() {
    long long first, second;
    std::cin >> first >> second;
    first ^= second;
    second ^= first;
    first ^= second;
    std::cout << first << ' ' << second << '\n';
}
