#include <iostream>
using namespace std;

bool check(string vps) {
	int count = 0;
	int len = vps.length();
	for (int i = 0; i<len; i++) {
		if (vps[i] == '\(') count++;
		else if (vps[i] == '\)')count--;
		if (count < 0) return false;
	}
	if (count == 0) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string vps;
		cin >> vps;
		if (check(vps))cout << "YES"<<"\n";
		else cout << "NO"<<"\n";
	}
}