#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 || b == 0 || c == 0) break;

		int A = a * a, B = b * b, C = c * c;
		if ((A + B == C) || (A + C == B) || (B + C == A)) cout << "right"<<"\n";
		else cout << "wrong" << "\n";
	}
}