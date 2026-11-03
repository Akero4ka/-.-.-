#include <iostream>

int main() {
    unsigned long long current, goal;
    std::cin >> current >> goal;
    if (!goal || current < goal) { std::cout << "Invalid input\n"; return 0; }
    while (current > goal) {
        // Делить выгодно, пока половина не окажется меньше цели.
        if (current / 2 >= goal) {
            if (current % 2) { std::cout << "-1\n"; --current; }
            std::cout << ":2\n";
            current /= 2;
        } else {
            std::cout << "-1\n";
            --current;
        }
    }
}
