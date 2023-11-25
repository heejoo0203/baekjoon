#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string arr[5];
	int len = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		int lens = arr[i].length();
		if (len < lens) len = lens;
	}
	for (int i = 0; i < 5; i++) {
		while (arr[i].length() < len) {
			arr[i] += " ";
		}
	}
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == ' ') continue;
			cout << arr[j][i];
		}
	}
	return 0;
}