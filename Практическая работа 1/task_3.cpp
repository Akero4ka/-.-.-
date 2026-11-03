#include <iostream>

int main() {
    int flag;
    std::cin >> flag;
    // При A=0 получаем 2, при A=1 получаем 1.
    const int result = 1 + (1 - flag);
    std::cout << result << '\n';
}
