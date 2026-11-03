#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j < N - 1) {
                cout << 0;
            } else if (i + j == N - 1) {
                cout << 1;
            } else {
                cout << 2;
            }
            
            // Печатаем пробел после каждого числа, кроме последнего в строке
            if (j < N - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
