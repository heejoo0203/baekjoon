#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> mystack;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push") {
			int k;
			cin >> k;
			mystack.push(k);
		}
		else if (a == "pop") {
			if (!mystack.empty()) {
				cout << mystack.top() << endl;
				mystack.pop();
			}
			else cout << -1 << endl;
		}
		else if (a == "size") {
			cout << mystack.size()<<endl;
		}
		else if (a == "empty") {
			cout << mystack.empty()<<endl;
		}
		else if (a == "top") {
			if (!mystack.empty() )cout << mystack.top() << endl;
			else cout << -1 << endl;
		}
	}
	return 0;
}