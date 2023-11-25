#include <iostream>
using namespace std;

long long calculateCombination(int n, int r) {
    if (r > n - r)
        r = n - r;
    
    long long result = 1;

    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        long long answer = calculateCombination(M, N);

        cout << answer << endl;
    }

    return 0;
}