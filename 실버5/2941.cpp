#include <iostream>
#include <string>

using namespace std;

string arr[8] = { "c=","c-","d-","lj","nj","s=","z=", "dz="};

int main() {
	string word;

	cin >> word;

	int x[8] = { 0 };
	for (int i = 0; i < 8; i++) {
		size_t pos = 0;
		while ((pos = word.find(arr[i], pos)) != string::npos) {
			x[i]++;
			pos += arr[i].length();
		}
	}

	int sum = 0;
	for (int i = 0; i < 8; i++) {
		sum += x[i];
	}

	int ans = (int)word.length() - sum;

	cout << ans;
	
	return 0;
}