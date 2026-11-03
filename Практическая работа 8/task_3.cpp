#include <iostream>

void moveIngredients(int count, int origin, int destination) {
    if (count == 0) return;
    const int spare = 6 - origin - destination;
    moveIngredients(count - 1, origin, spare);
    std::cout << "Ingredient " << count << " move from " << origin
              << " to " << destination << '\n';
    moveIngredients(count - 1, spare, destination);
}

int main() {
    int ingredients;
    std::cin >> ingredients;
    if (ingredients < 0) { std::cout << "Invalid input\n"; return 0; }
    moveIngredients(ingredients, 1, 3);
}
