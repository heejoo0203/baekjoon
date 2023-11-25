#include <iostream>
using namespace std;

int fac(int x) {
	if (x <= 1) return 1;
	return x * fac(x - 1);
}
int main() {
	int n, r;
	cin >> n >> r;
	int ans = fac(n) / fac(r) / fac(n - r);
	cout << ans;
}