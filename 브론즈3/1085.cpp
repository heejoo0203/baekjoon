#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int a, b;

	if (w - x >= x) a = x;
	else a = w - x;
	if (h - y >= y) b = y;
	else b = h - y;

	if (a > b) cout << b;
	else cout << a;

	return 0;
}