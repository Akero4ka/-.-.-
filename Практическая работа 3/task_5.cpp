#include <iostream>
#include <iomanip>

int main() {
    unsigned long long elapsed;
    std::cin >> elapsed;
    elapsed %= 86400;
    std::cout << elapsed / 3600 << ':' << std::setfill('0')
              << std::setw(2) << elapsed / 60 % 60 << ':'
              << std::setw(2) << elapsed % 60 << '\n';
}
