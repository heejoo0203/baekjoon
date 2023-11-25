#include <iostream>
using namespace std;

int main() {
	int a[8];
	int x=0;

	for (int i = 0; i < 8; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < 8; i++) {
		if (a[i] == a[i - 1] + 1) continue;
		else { x = 1; break; }
	}
	if (x == 0) { cout << "ascending"; return 0; }
	for (int i = 1; i < 8; i++) {
		if (a[i] == a[i - 1] - 1) continue;
		else x = 2; break;
	}
	if (x == 1) cout << "descending";
	else if (x == 2) cout << "mixed";

}