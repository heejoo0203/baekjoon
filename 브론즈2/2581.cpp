#include <iostream>

using namespace std;

bool ifPrimeNum(int n) {
	int count = 0;
	if (n <= 1) return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			count++;
			break;
		}
	}

	if (count) return false;
	else return true;
}

int main() {
	int a, b;
	cin >> a >> b;

	int sum = 0;
	int min = b;
	for (int i = a; i <= b; i++) {
		if (ifPrimeNum(i)) {
			sum += i;
			if (min > i) min = i;
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << min;
	}
	return 0;
}