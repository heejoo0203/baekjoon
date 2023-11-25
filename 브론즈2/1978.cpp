#include <iostream>
using namespace std;

bool primenum(int a) {
	for (int i = 2; i < a; i++) {
		if (a % i == 0) return false;
	}
	return true;
}

int main() {
	int num;
	cin >> num;
	int count = 0;
	for (int i = 0; i < num; i++) {
		int a;
		cin >> a;
		if (a == 1) continue;
		if (primenum(a)) count++;
	}
	cout << count;
}