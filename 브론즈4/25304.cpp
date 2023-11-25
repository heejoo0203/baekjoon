#include <iostream>

using namespace std;

int main() {
	int sum;
	cin >> sum;

	int num;
	cin >> num;

	int arr[100][2] = { 0 };
	int sum1=0;
	for (int i = 0; i < num; i++) {
		cin >> arr[i][0] >> arr[i][1];
		sum1 += arr[i][0] * arr[i][1];
	}
	if (sum == sum1)cout << "Yes";
	else cout << "No";

	
	return 0;
}