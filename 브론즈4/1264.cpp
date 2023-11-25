#include <iostream>
#include <string>

using namespace std;

int main() {
    string sen;
    while (true) {
        getline(cin, sen);
        if (sen == "#") break;
        int count = 0;
        for (char c : sen) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
