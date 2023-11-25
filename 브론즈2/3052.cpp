#include <iostream>
using namespace std;

int main() {
	int a[10];
	int count=0;

	for (int i = 0; i < 10; i++) {
		bool k = true;;
		int x;
		cin >> x;
		a[i] = x % 42;
		for (int j = i-1; j >= 0; j--) {
			if (a[i] == a[j]) {
				k = false; break;
			}
		}
		if (k) count++;
	}
	cout << count;
	return 0;
}