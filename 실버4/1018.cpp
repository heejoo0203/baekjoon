#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countRepaints(vector<string>& board, int startX, int startY) {
    int repaintCount = 0;
    char startColor = board[startX][startY];

    for (int i = startX; i < startX + 8; ++i) {
        for (int j = startY; j < startY + 8; ++j) {
            if ((i + j - startX - startY) % 2 == 0 && board[i][j] != startColor) {
                // 다시 칠해야 하는 경우
                repaintCount++;
            }
            if ((i + j - startX - startY) % 2 == 1 && board[i][j] == startColor) {
                // 다시 칠해야 하는 경우
                repaintCount++;
            }
        }
    }

    return min(repaintCount, 64 - repaintCount);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for (int i = 0; i < N; ++i) {
        cin >> board[i];
    }

    int minRepaints = N * M; // 초기값 설정

    for (int i = 0; i + 7 < N; ++i) {
        for (int j = 0; j + 7 < M; ++j) {
            int repaints = countRepaints(board, i, j);
            minRepaints = min(minRepaints, repaints);
        }
    }

    cout << minRepaints << endl;

    return 0;
}
