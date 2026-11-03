#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <utility>

int main() {
    int size;
    std::cin >> size;
    std::list<int> queue;
    for (int i = 0, lesson; i < size; ++i) { std::cin >> lesson; queue.push_back(lesson); }
    int departed = 0;
    bool again;
    do {
        again = false;
        // Группы отмечаются до удаления: все уходят одновременно за раунд.
        std::vector<std::pair<std::list<int>::iterator, std::list<int>::iterator>> groups;
        for (auto first = queue.begin(); first != queue.end();) {
            auto last = std::next(first);
            while (last != queue.end() && *last == *first) ++last;
            if (std::distance(first, last) >= 2) groups.emplace_back(first, last);
            first = last;
        }
        // Удаление слева направо сохраняет начало следующего диапазона.
        for (const auto& group : groups) {
            departed += static_cast<int>(std::distance(group.first, group.second));
            queue.erase(group.first, group.second);
            again = true;
        }
    } while (again);
    std::cout << departed << '\n';
}
