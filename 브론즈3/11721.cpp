#include <iostream>
using namespace std;

int main() {
	char word[100];
	cin >> word;
	int i = 0;
	while (word[i] != '\0') {
		cout << word[i];
		if (++i % 10 == 0) cout << "\n";
	}
	return 0;
}