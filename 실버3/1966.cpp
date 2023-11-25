#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        queue<int> q;
        int n, m;
        cin >> n >> m;

        int* arr = new int[n];
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            q.push(k);
            arr[j] = k;
        }

        sort(arr, arr + n, greater<>());

        int count = 0;

        while (true) {
            if (q.front() == arr[count]) {
                count++;
                q.pop();
                if (m == 0) {
                    cout << count << endl;
                    break;
                }
                else {
                    m--;
                }
            }
            else {
                int x = q.front();
                q.pop();
                q.push(x);
                if (m == 0) {
                    m = q.size() - 1;
                }
                else {
                    m--;
                }
            }
        }

        delete[] arr;
    }

    return 0;
}
