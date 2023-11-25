#include <iostream>

using namespace std;

int floor(int k,int n) {
    if (k <= 0) return n;
    if (n <= 1) return 1;
    return floor(k, n - 1) + floor(k - 1,n);
}

int main() {
    int t, k, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k >> n;
        cout << floor(k, n) << endl;
    }
    return 0;
}
