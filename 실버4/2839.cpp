#include <iostream>
using namespace std;

int main() {
	int sugar;
	cin >> sugar;
	int num3=0, num5=0;
	while (sugar > 0) {
		if (sugar % 5 == 0) {
			num5 = sugar / 5;
			sugar = 0;
		}
		else {
			sugar -= 3;
			num3++;
		}
	}
	if (sugar < 0) {
		num3 = 0;
		num5 = -1;
	}
	cout << num3 + num5;
}