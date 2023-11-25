#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B, V;
    cin >> A >> B >> V;

    long long days = (V - B - 1) / (A - B) + 1;

    cout << days << endl;
    return 0;
}
