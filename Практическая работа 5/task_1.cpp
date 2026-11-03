#include <iostream>

int main() {
    long double initial, target;
    std::cin >> initial >> target;
    if (initial <= 0 || target <= 0) { std::cout << "Invalid input\n"; return 0; }
    unsigned long long day = 1;
    // Считается объём за день, а не накопленная сумма.
    for (long double amount = initial; amount < target; amount *= 1.1L) ++day;
    std::cout << day << '\n';
}
