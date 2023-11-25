#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	int a = s.size();
	int count1 = 0;

	for (int i = 0; i < a; i++) {
		if (s[i] == '0') {
			if (s[i] != s[i + 1]) {
				count1++;
			}
		}
	}

	int count2 = 0;
	for (int i = 0; i < a; i++) {
		if (s[i] == '1') {
			if (s[i] != s[i + 1]) {
				count2++;
			}
		}
	}
	if (count1 >= count2) cout << count2;
	else cout << count1;

	return 0;
}