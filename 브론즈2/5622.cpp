#include <iostream>
using namespace std;

int main() {
	string word;
	cin >> word;
	int len = word.length();
	int* arr = new int[len];
	int sum = 0;
	for (int i = 0; i < len; i++) {
			arr[i] = (((int)word[i] - (int)'A') / 3) + 2;
			if (word[i] == 'S') arr[i] = 7;
			if (word[i] == 'V') arr[i] = 8;
			if (arr[i] == 10) arr[i] = 9;
			sum += arr[i] + 1;
	}
	cout << sum;
	return 0;
}