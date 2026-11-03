#include <iostream>
#include <string>
using namespace std;

int main() {
    string current;
    int n;
    cin >> current >> n;

    for (int step = 0; step < n - 1; step++) {
        string next_str = "";
        int i = 0;

        while (i < current.length()) {
            int count = 1;
            while (i + 1 < current.length() && current[i] == current[i + 1]) {
                count++;
                i++;
            }
            next_str = next_str + (char)('0' + count) + current[i];
            i++;
        }
        current = next_str;
    }

    cout << current << endl;
    return 0;
}
