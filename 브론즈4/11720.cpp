#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	char arr[100];
	for (int i = 0; i < num; i++)cin >> arr[i];
	
	int sum = 0;
	for (int i = 0; i < num; i++) {
		int a = arr[i] - '0';
		sum += a;
	}
	cout << sum;
	return 0;
}