#include <iostream>

using namespace std;

int gb(int a, int b) {
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a % b == 0) {
		return a;
	}
	int k = 1;
	int i;
	while (true) {
		for (i = 2; i <= b; i++) {
			if (a % i == 0 && b % i == 0) {
				k *= i;
				a /= i;
				b /= i;
				break;
			}
		}
		if (i - 1 == b)break;
	}
	return k * a * b;
}

int main() {
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b;
		cout << gb(a, b) << endl;
	}
	return 0;
}