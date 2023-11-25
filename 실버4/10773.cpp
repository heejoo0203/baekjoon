#include <iostream>

using namespace std;

int main() {
	int k;

	cin >> k;

	int arr[100000];
	int n = 0;

	for (int i = 0; i < k; i++) {
		cin >> arr[n];
		if (arr[n] != 0) {
			n++;
		}
		else {
			n--;
		}
	}
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	cout << sum;

	return 0;
}