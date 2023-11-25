#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());

    int result = 0;
    for (int i = 0; i < N; i++) {
        int maxB = *max_element(B.begin(), B.end());
        result += A[i] * maxB;
        B.erase(max_element(B.begin(), B.end()));
    }

    cout << result << endl;

    return 0;
}
