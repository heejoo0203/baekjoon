#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> card;
	for (int i = 0; i < n; i++) {
		card.push(i + 1);
	}
	while (card.size() != 1) {
		card.pop();
		int k = card.front();
		card.push(k);
		card.pop();
	}
	cout << card.front();
}