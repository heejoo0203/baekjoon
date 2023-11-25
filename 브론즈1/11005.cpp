#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, b;
	cin >> n >> b;
	string num = "";
	while (n) {
		int x = n % b;
		string y;
		if (x <= 9) {
			y = to_string(x);
		}
		if (x > 9) {
			x = x - 10 + 'A';
			y = x;
		}
		n /= b;
		num = y + num;
	}
	cout << num;
	return 0;
}