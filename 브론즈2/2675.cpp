#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    while (num--) {
        int a;
        cin >> a;
        char b[21];
        cin >> b;
        for (int i = 0; b[i] != '\0'; i++) {
            for (int j = 0; j < a; j++) {
                cout << b[i];
            }
        }
        cout << '\n';
    }
}