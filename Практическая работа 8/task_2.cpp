#include <iostream>

unsigned int recursiveGcd(unsigned int first, unsigned int second) {
    if (first == 0) return second;
    return recursiveGcd(second % first, first);
}

int main() {
    unsigned int a, b;
    std::cin >> a >> b;
    std::cout << recursiveGcd(a, b) << '\n';
}
