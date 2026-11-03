#include <iostream>
#include <limits>

int main() {
    int count;
    std::cin >> count;
    if (count < 0) { std::cout << "Invalid input\n"; return 0; }
    unsigned long long product = 1, fact = 1;
    const auto limit = std::numeric_limits<unsigned long long>::max();
    int factor = 1;
    while (factor <= count) {
        if (fact > limit / factor) { std::cout << "Overflow\n"; return 0; }
        fact *= factor;
        if (product > limit / fact) { std::cout << "Overflow\n"; return 0; }
        product *= fact;
        ++factor;
    }
    std::cout << product << '\n';
}
