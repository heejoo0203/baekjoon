#include <iostream>
#include <vector>
#include <string>

using namespace std;

void check(vector<int> num, int count) {
    int arr[6];
    vector<string> answer;

    for (int i = 0; i < count; i++) {
        int j = 0;
        int temp = num[i];

        while (temp > 0) {
            arr[j] = temp % 10;
            temp /= 10;
            j++;
        }

        int left = arr[0];
        int right = arr[j - 1];

        switch (j) {
        case 1:
            if (left == right) {
                answer.push_back("yes");
            }
            else answer.push_back("no");
            break;
        case 2:
            if (left == right) {
                answer.push_back("yes");
            }
            else answer.push_back("no");
            break;
        case 3:
            if (left == right) {
                left = arr[1];
                right = arr[j - 2];
                if (left == right) {
                    answer.push_back("yes");
                }
                else answer.push_back("no");
            }
            else answer.push_back("no");
            break;
        case 4:
            if (left == right) {
                left = arr[1];
                right = arr[j - 2];
                if (left == right) {
                    answer.push_back("yes");
                }
                else answer.push_back("no");
            }
            else answer.push_back("no");
            break;
        case 5:
            if (left == right) {
                left = arr[1];
                right = arr[j - 2];
                if (left == right) {
                    left = arr[2];
                    right = arr[j - 3];
                    if (left == right) {
                        answer.push_back("yes");
                    }
                    else answer.push_back("no");
                }
                else answer.push_back("no");
            }
            else answer.push_back("no");
            break;
        case 6:
            if (left == right) {
                left = arr[1];
                right = arr[j - 2];
                if (left == right) {
                    left = arr[2];
                    right = arr[j - 3];
                    if (left == right) {
                        answer.push_back("yes");
                    }
                    else answer.push_back("no");
                }
                else answer.push_back("no");
            }
            else answer.push_back("no");
            break;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << answer[i] << endl;
    }
}

int main() {
    vector<int> num;

    int input;
    while (true) {
        cin >> input;
        if (input == 0)
            break;
        num.push_back(input);
    }

    int count = num.size();
    check(num, count);

    return 0;
}
