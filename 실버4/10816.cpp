#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> cards;
    int N, M, num;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> num;
        cards[num]++;
    }

    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> num;
        cout << cards[num] << ' ';
    }

    return 0;
}
