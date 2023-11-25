#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	if (a == 60 && b == 60 && c == 60) cout << "Equilateral";
	else if (sum == 180 && (a == c || b == c || b == a)) cout << "Isosceles";
	else if (sum == 180 && (a != c && b != c && b != a)) cout << "Scalene";
	else if (sum != 180) cout << "Error";
	return 0;
}