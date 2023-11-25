#include <iostream>

using namespace std;

int find(int n) {
	int sum = 0;
	int temp = 0;
	for (int i = 1; i < n; i++) {
		sum = i;
		temp = i;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == n) {
			return sum;
		}
	}
	return 0;
}

int main() {
	int n = 1;
	while (n <= 10000) {
		int result = find(n);
		if (result != n) {
			cout << n<< "\n";
		}
		n += 1;
	}
	return 0;
}