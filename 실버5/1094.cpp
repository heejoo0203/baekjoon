#include <iostream>

using namespace std;

int range(int num) {
	if (num == 64) return 0;
	if (num < 64 && num >=32) return 1;
	if (num < 32 && num >=16) return 2;
	if (num < 16 && num >=8) return 3;
	if (num < 8 && num >=4) return 4;
	if (num < 4 && num >= 2) return 5;
	if (num == 1) return 6;
}

int main() {
	int x;

	cin >> x;

	int count = 0;
	while (x >= 1) {
		switch(range(x)) {
		case 0: x -= 64; count++; break;
		case 1: x -= 32; count++; break;
		case 2: x -= 16; count++; break;
		case 3: x -= 8; count++; break;
		case 4: x -= 4; count++; break;
		case 5: x -= 2; count++; break;
		case 6: x -= 1; count++; break;
		}
	}
	
	cout << count;
}