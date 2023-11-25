#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	if (n % 2 == 0) {
		cout << arr[0] * arr[n - 1];
	}
	else cout << arr[(n - 1) / 2] * arr[(n - 1) / 2];
	return 0;
}