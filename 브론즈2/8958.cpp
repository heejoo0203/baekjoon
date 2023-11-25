#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	string ans;
	int *arr = new int [num];
	for (int i = 0; i < num; i++) {
		cin >> ans;
		int a=0, sum = 0;
		for (int j = 0; ans[j] != '\0'; j++) {
			if (ans[j] == 'O') {
				++a;
				sum += a;
			}
			else {
				a = 0;
			}
		}
		arr[i] = sum;
	}
	for (int i = 0; i < num; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}