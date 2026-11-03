#include <iostream>
#include <vector>

int main() {
    int leftSize, rightSize;
    std::cin >> leftSize >> rightSize;
    std::vector<long long> left(leftSize), right(rightSize);
    for (auto& value : left) std::cin >> value;
    for (auto& value : right) std::cin >> value;
    auto l = left.begin(), r = right.begin();
    // Один проход слияния; отдельные циклы выше нужны только для ввода.
    for (int output = 0; output < leftSize + rightSize; ++output) {
        if (output) std::cout << ' ';
        if (r == right.end() || (l != left.end() && *l < *r))
            std::cout << *l++;
        else
            std::cout << *r++;
    }
    std::cout << '\n';
}
