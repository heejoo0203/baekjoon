#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ottSum(int n) {
    vector<int> dp(n + 1, 0);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int result = ottSum(m);
        cout << result << "\n";
    }

    return 0;
}