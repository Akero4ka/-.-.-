#include <iostream>

int main() {
    long long first, second;
    std::cin >> first >> second;
    std::cout << ((first % second) * (second % first) == 0) << '\n';
}
