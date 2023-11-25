#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int n;
	cin >> n;
	deque<int> mydeque;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push_front") {
			int k;
			cin >> k;
			mydeque.push_front(k);
		}
		else if (a == "push_back") {
			int k;
			cin >> k;
			mydeque.push_back(k);
		}
		else if (a == "pop_back") {
			if (!mydeque.empty()) {
				cout << mydeque.back() << endl;
				mydeque.pop_back();
			}
			else cout << -1 << endl;
		}
		else if (a == "pop_front") {
			if (!mydeque.empty()) {
				cout << mydeque.front() << endl;
				mydeque.pop_front();
			}
			else cout << -1 << endl;
		}
		else if (a == "size") {
			cout << mydeque.size() << endl;
		}
		else if (a == "empty") {
			cout << mydeque.empty() << endl;
		}
		else if (a == "front") {
			if (!mydeque.empty())cout << mydeque.front() << endl;
			else cout << -1 << endl;
		}
		else if (a == "back") {
			if (!mydeque.empty())cout << mydeque.back() << endl;
			else cout << -1 << endl;
		}
	}
	return 0;
}