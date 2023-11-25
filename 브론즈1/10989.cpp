#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> arr(10001, 0);

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[num]++;
	}
	for (int i = 0; i <= 10000; i++) {
		while (arr[i] > 0) {
			cout << i << "\n";
			arr[i]--;
		}
	}
	return 0;
}