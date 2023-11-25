#include <iostream>

using namespace std;

void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int num) {
    int arr[10] = { 0 };

    int k = 0;
    while (num != 0 && k < 10) {
        arr[k] = num % 10;
        num /= 10;
        k++;
    }

    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (arr[i] < arr[j]) {
                mySwap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < k ; i++) {
        cout << arr[i];
    }
}

int main() {
    int num;

    cin >> num;
    sort(num);

    return 0;
}
