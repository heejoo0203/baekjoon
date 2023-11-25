#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    float* a = new float[num];
    float max = a[0];
    for (int i = 0; i < num; i++) {
        cin >> a[i];
        if (max < a[i]) max = a[i];
    }
    float sum = 0;
    for (int i = 0; i < num; i++) {
        if (a[i] <= max) a[i] = a[i] / max * 100;
        sum += a[i];
    }
    float avg = sum / num;

    cout << avg;

}

