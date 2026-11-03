#include <iostream>

int main() {
    int length;
    std::cin >> length;
    int missing = length;
    // Каждое встреченное значение и каждый индекс взаимно уничтожаются XOR.
    for (int index = 0; index < length; ++index) {
        int value;
        std::cin >> value;
        missing ^= index ^ value;
    }
    std::cout << missing << '\n';
}
