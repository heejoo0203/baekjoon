#include <iostream>

using namespace std;
bool containsThreeConsecutiveSixes(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 6) {
            count++;
            if (count >= 3) {
                return true;
            }
        }
        else {
            count = 0;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    int num = 1;

    while (count < n) {
        if (containsThreeConsecutiveSixes(num)) {
            count++;
        }
        num++;
    }

    cout<<num - 1;

    return 0;
}