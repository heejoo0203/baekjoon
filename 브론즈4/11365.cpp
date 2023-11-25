#include <iostream>
#include <string>

using namespace std;

int main() {
    string sen;
    while (true) {
        getline(cin, sen);
        if (sen == "END") break;
        int len = sen.length();
        for (int i = len - 1; i >= 0; i--) {
            cout << sen[i];
        }
        cout << "\n";
    }
    return 0;
}
