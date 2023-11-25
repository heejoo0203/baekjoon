#include <iostream>

using namespace std;

int newNum(int num) {
    int sum = num / 10 + num % 10;
    int temp = num % 10;

    return temp * 10 + (sum %10);
}
int main() {
    int num;

    cin >> num;

    int cycle = 1;
    int n = newNum(num);

    while (n != num) {
        cycle++;
        n = newNum(n);
    }

    cout << cycle;

    return 0;
}
