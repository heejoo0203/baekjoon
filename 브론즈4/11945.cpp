#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    char arr[10][10];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = b - 1; j >= 0; j--) {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}
