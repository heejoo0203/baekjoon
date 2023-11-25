#include <iostream>
#include <vector>

using namespace std;
vector<long long> num(91, -1);

long long p(int n) {
    if (n == 0) num[n] = 0;
    if (n == 1) num[n] = 1;

    if (num[n] != -1) return num[n];

    num[n] = p(n - 1) + p(n - 2);

    return num[n];
}
int main() {
    int n;
    cin >> n;
    cout << p(n);
    return 0;
}
