#include <iostream>

using namespace std;

int main() {
	int a[4], b[4];
	int suma=0, sumb=0;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		suma += a[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> b[i];
		sumb += b[i];
	}
	if (suma >= sumb)cout << suma;
	else cout << sumb;
}