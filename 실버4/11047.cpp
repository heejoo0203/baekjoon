#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] <= k) {
			count = count + k / a[i];
			k = k % a[i];
		}
	}
	cout << count;
}