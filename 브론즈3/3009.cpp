#include <iostream>
using namespace std;

int main() {
	int x[4],y[4];
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
	if (x[1] - x[2] == 0) x[3] = x[0];
	else if (x[0] - x[1] == 0) x[3] = x[2];
	else x[3] = x[1];
	if (y[1] - y[2] == 0) y[3] = y[0];
	else if (y[0] - y[1] == 0) y[3] = y[2];
	else y[3] = y[1];
	cout << x[3] << " " << y[3];

}