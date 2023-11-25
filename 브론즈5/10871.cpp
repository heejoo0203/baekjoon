#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int* arr = new int[a];
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		if (x < b) arr[i] = x;
	}
	for (int i = 0; i < a; i++) {
		if (arr[i] > 0) cout << arr[i] << " ";
	}
}