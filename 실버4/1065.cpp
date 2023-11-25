#include <iostream>

using namespace std;

int main() {
	int num;

	cin >> num;

	int count = 0;

	if (num < 100) {
		count = num;
	}
	else if (num == 1000) {
		count = 144;
	}
	else {
		count = 99;
		for (int i = 100; i <= num; i++) {
			int arr[3];
			int n = i;

			for (int j = 0; n != 0; j++) {
				arr[j] = n % 10;
				n /= 10;
			}
			int d = arr[1] - arr[2];

			if (arr[1] + d == arr[0]){
				count++;
			}

		}
	}
	cout << count;
}