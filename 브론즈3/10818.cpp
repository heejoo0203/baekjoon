#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	int max=num[0], min=num[n-1];
	for (int i = 0; i < n; i++) {
		if (max < num[i]) max = num[i];
		if (min > num[n - i - 1]) min = num[n - i - 1];
	}

	cout << min << " " << max;
	return 0;
}