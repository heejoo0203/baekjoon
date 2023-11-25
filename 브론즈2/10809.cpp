#include <iostream>
using namespace std;

int main() {
	int arr[26] = {0};
	string word;
	cin >> word;
	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}
	for (int i = 0; word[i] != '\0'; i++) {
		if(arr[word[i]-'a'] == -1) arr[word[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}