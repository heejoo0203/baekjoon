#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		int row, col, n;
		cin >> row >> col >> n;
		int a, b;
		if (n % row != 0) {
			a = n / row;
			b = n % row;
		}
		else {
			a = (n-1) / row;
			b = row;
		}
		arr[i] = 100 * b + a + 1;
	}
	for (int i = 0; i < num; i++) {
		cout << arr[i] << "\n";
	}
}