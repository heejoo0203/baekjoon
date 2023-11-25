#include <iostream>

using namespace std;

int main() {
	int num;
	int arr[10] = { 0 };

	cin >> num;

	for (int i = 0; num != 0; i++) {
		arr[num % 10]+=1;
		num /= 10;
	}
	int x;

	if ((arr[6] + arr[9]) % 2) {
		x = (arr[6] + arr[9]) / 2 + 1;
	}
	else x =(arr[6] + arr[9]) / 2;

	arr[6] = x;
	arr[9] = x;

	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) max = arr[i];
	}

	cout << max;

	return 0;
}