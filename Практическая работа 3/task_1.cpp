#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    long double horizontal, vertical;
    std::cin >> horizontal >> vertical;
    std::cout << std::setprecision(15) << std::hypot(horizontal, vertical) << '\n';
}
