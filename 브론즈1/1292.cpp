#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int sum = 0;
	int* arr = new int[b];
	int k = 1;
	int count = 0;
	for (int i = 0; i < b; i++) {
		arr[i] = k;
		count++;
		if (count == k) {
			count = 0;
			k++;
		}
		if (i >= a - 1) sum += arr[i];
	}
	cout << sum;
	return 0;
}