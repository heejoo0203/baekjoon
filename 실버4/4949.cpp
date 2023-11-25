#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string a;

    while (true) {
        getline(cin, a);
        if (a == ".") break;

        stack<char> mystack;
        bool check = true;

        for (char c : a) {
            if ((c == '(') || (c == '[')) {
                mystack.push(c);
            } else if (c == ')') {
                if (!mystack.empty() && mystack.top() == '(') {
                    mystack.pop();
                } else {
                    check = false;
                    break;
                }
            } else if (c == ']') {
                if (!mystack.empty() && mystack.top() == '[') {
                    mystack.pop();
                } else {
                    check = false;
                    break;
                }
            }
        }

        if (!mystack.empty() || !check) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }

    return 0;
}