#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = num; i >= 1; i--) {
        cout << i << '\n';  // 개행 문자 '\n' 사용
    }

    return 0;
}
