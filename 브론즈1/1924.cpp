#include <iostream>

using namespace std;

string date(int mm, int dd) {
	int num = 0;
	string day;
	if (mm == 1) num = dd;
	if (mm == 2) num = dd + 31;
	if (mm == 3) num = dd + 59;
	if (mm == 4) num = dd + 90;
	if (mm == 5) num = dd + 120;
	if (mm == 6) num = dd + 151;
	if (mm == 7) num = dd + 181;
	if (mm == 8) num = dd + 212;
	if (mm == 9) num = dd + 243;
	if (mm == 10) num = dd + 273;
	if (mm == 11) num = dd + 304;
	if (mm == 12) num = dd + 334;

	switch (num % 7) {
	case 1: 
		day = "MON";
		break;
	case 2:
		day = "TUE";
		break;
	case 3:
		day = "WED";
		break;
	case 4:
		day = "THU";
		break;
	case 5:
		day = "FRI";
		break;
	case 6:
		day = "SAT";
		break;
	case 0:
		day = "SUN";
		break;
	default:
		break;
	}

	return day;
}

int main() {
	int mm, dd;

	cin >> mm >> dd;

	string result = date(mm, dd);

	cout << result;
}