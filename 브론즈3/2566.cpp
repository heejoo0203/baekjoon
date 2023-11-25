#include <iostream>

using namespace std;

int arr[9][9] = { 0 };

int main() {
	int a, b;
	int m = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (m <= arr[i][j]) {
				m = arr[i][j];
				a = i + 1;
				b = j + 1;
			}
		}
	}
	cout << m << "\n" << a << " " << b;
	return 0;
}