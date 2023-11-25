#include <iostream>

using namespace std;

int main() {
	int l, p;
	int arr[5] = { 0 };

	cin >> l >> p;
	int total = l * p;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		arr[i] -= total;
	}
	for (int i = 0; i < 5; i++)cout << arr[i] << " ";
	return 0;
}