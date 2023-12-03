#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, b;
    cin >> n >> m >> b;

    vector<vector<int>> land(n, vector<int>(m));

    int minHeight = 257;
    int maxHeight = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> land[i][j];
            minHeight = min(minHeight, land[i][j]);
            maxHeight = max(maxHeight, land[i][j]);
        }
    }

    int minTime = INT_MAX;
    int resultHeight = 0;

    for (int height = minHeight; height <= maxHeight; ++height) {
        int time = 0;
        int inventory = b;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int diff = land[i][j] - height;

                if (diff > 0) {
                    time += 2 * diff;
                    inventory += diff;
                }
                else if (diff < 0) {
                    time -= diff;
                    inventory += diff;
                }
            }
        }

        if (time <= minTime && inventory >= 0) {
            minTime = time;
            resultHeight = height;
        }
    }

    cout << minTime << " " << resultHeight << "\n";

    return 0;
}
