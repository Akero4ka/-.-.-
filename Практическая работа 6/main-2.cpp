#include <iostream>
using namespace std;

int field[35][35];

int main() {
    int N, M, W;
    cin >> N >> M >> W;

    for (int i = 0; i < W; i++) {
        int r, c;
        cin >> r >> c;
        field[r - 1][c - 1] = 99; 
    }

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (field[r][c] == 99) {
                cout << "*"; 
            } else {
                int count = 0;
                for (int dr = -1; dr <= 1; dr++) {
                    for (int dc = -1; dc <= 1; dc++) {
                        int nr = r + dr;
                        int nc = c + dc;
                        if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
                            if (field[nr][nc] == 99) {
                                count++;
                            }
                        }
                    }
                }
                cout << count;
            }
        }
        cout << endl; 
    }
    return 0;
}
