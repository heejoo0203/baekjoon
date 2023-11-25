#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p,p+n);

	int sum = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		k += p[i];
		sum += k;
	}
	cout << sum;

}