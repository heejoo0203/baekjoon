#include <iostream>
using namespace std;

int main() {
	int x;

	cin >> x;

	int count = 0, i =1;
	while (1) {
		
		count += i;
		if (count >= x) {
			break;
		}
		i++;
	}

	int a = x - (count-i);

	if (i % 2) {
		cout << i - (a - 1) << "/" << a;
	}
	else {
		cout << a << "/" << i - (a - 1);
	}

	return 0;
}