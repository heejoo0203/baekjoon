#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	int count = 0;
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		if (a == n) count++;
	}
	cout << count;
}