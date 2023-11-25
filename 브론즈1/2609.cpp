#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int CY=0, CB=1;
	for (int i = 1; i <= min(a, b); i++) {
		if ((a % i == 0) && (b % i == 0)) CY = i;
	}
	if (max(a, b) % min(a, b) == 0) CB = max(a, b);
	else {
		for (int i = 1; i <= b; i++) {
			for (int j = 1; a * i >= b * j; j++) {
				if (a * i == b * j) {
					CB = b*j;
					break;
				}
			}
			if (CB != 1) break;
		}
	}
	cout << CY << "\n" << CB;
}