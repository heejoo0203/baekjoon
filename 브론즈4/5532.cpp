#include <iostream>

using namespace std;

int main() {
	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;
	int day;
	if(a%c!=0 && b%d!=0) day = (a / c + 1 >= b / d + 1) ? a / c + 1 : b / d + 1;
	if (a % c != 0 && b % d == 0) day = (a / c + 1 >= b / d ) ? a / c + 1 : b / d ;
	if (a % c == 0 && b % d != 0) day = (a / c  >= b / d + 1) ? a / c  : b / d + 1;
	if (a % c == 0 && b % d == 0) day = (a / c  >= b / d ) ? a / c  : b / d ;
	cout << l - day;
}