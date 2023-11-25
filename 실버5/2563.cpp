#include <iostream>

using namespace std;
int arr[100][100] = { 0 };

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j < a + 10; j++) {
            for (int k = b; k < b + 10; k++) {
                arr[j][k] = 1;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}