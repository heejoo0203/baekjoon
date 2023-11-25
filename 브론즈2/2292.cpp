#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }

    int room = 2;
    int step = 1;
    int range = 6;

    while (room <= n) {
        room += range;
        range += 6;
        step++;
    }

    cout << step << endl;

    return 0;
}
