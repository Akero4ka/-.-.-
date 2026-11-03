#include <iostream>

int main() {
    long long height, climb, slide;
    std::cin >> height >> climb >> slide;
    if (height <= climb) { std::cout << "1\n"; return 0; }
    if (climb <= slide) { std::cout << "Impossible\n"; return 0; }
    const long long remaining = height - climb;
    const long long daily = climb - slide;
    std::cout << 2 + (remaining - 1) / daily << '\n';
}
