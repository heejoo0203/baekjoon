#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (B >= C) {
        cout << -1 << endl;
    }
    else {
        int breakEvenPoint = A / (C - B) + 1;
        cout << breakEvenPoint << endl;
    }

    return 0;
}
