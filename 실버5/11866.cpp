#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	queue<int> num;
	for (int i = 0; i < n; i++) {
		num.push(i + 1);
	}
	cout << "<";
	while (num.size()!=1) {
		for (int i = 0; i < k-1; i++) {
			int k = num.front();
			num.pop();
			num.push(k);
		}
		cout << num.front() << ", ";
		num.pop();
	}
	cout << num.front() << ">";
	return 0;
}