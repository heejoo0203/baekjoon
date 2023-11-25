#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mid = a;
    if ((b >= a && b <= c) || b <= a && b >= c) mid = b;
    if ((c >= a && c <= b) || (c <= a && c >= b)) mid = c;
    cout << mid;
}

