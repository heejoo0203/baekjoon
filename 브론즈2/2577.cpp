#include <iostream>
using namespace std;

int main() {
	int a[10] = { 0 };
	int x, y, z;
	cin >> x>> y>> z;
	int t = x * y * z;
	while (t) {
		int i = t % 10;
		a[i]++;
		t /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}
}