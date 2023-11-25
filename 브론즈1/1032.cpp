#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string* a = new string[n];
	int len;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		len = a[i].length();
	}
	string result = a[0];
	if (n == 1) cout << a[0];
	else {
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < n-1; j++) {
				if (a[j][i] != a[j + 1][i]) {
					result[i] = '?';
				}
			}
		}
		cout << result;
	}
	return 0;
}