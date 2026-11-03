#include <iostream>
#include <cmath>
#include <iomanip>

long double fastPower(long double base, unsigned long long exponent) {
    if (exponent == 0) return 1;
    const long double half = fastPower(base, exponent / 2);
    return exponent % 2 ? half * half * base : half * half;
}

int main() {
    long double base;
    long long exponent;
    std::cin >> base >> exponent;
    if (base == 0 && exponent < 0) { std::cout << "Undefined\n"; return 0; }
    const auto magnitude = exponent < 0
        ? static_cast<unsigned long long>(-(exponent + 1)) + 1
        : static_cast<unsigned long long>(exponent);
    const auto answer = fastPower(exponent < 0 ? 1 / base : base, magnitude);
    if (std::isfinite(answer)) std::cout << std::setprecision(15) << answer << '\n';
    else std::cout << "Overflow\n";
}
