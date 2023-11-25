#include <iostream>

using namespace std;

int *rating(int weight[], int height[], int n, int rate[]) {

	int num = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((weight[i] < weight[j]) && (height[i] < height[j])) {
				num += 1;
			}
		}
		rate[i] = num + 1;
		num = 0;
	}

	return rate;
}

int main() {
	int n;
	int weight[50];
	int height[50];
	int rate[50];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> weight[i] >> height[i];
	}

	int* ptr = rating(weight, height, n, rate);

	for (int i = 0; i < n; i++) {
		cout << ptr[i]<<" ";
	}
	return 0;
}