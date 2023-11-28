#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n, 0);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        sum += k;
        v[i] = k;
    }
    
    sort(v.begin(),v.end());
    int avg1 = round((double)sum / (double)n);
    cout << avg1 << "\n";

    int avg2 = v[n / 2];
    cout << avg2 << "\n";

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }

    int max_freq = 0;
    for (auto p : freq) {
        if (p.second > max_freq) {
            max_freq = p.second;
        }
    }

    set<int> s;
    for (auto p : freq) {
        if (p.second == max_freq ) {
            s.insert(p.first);
        }
    }

    int avg3 = 0;
    auto p = s.begin();
    if(s.size() == 1){
        avg3 = *p;
        cout << avg3 << "\n";
    }
    else{
        advance(p,1);
        avg3 = *p;
        cout << avg3 << "\n";
    }

    int avg4 = v[n - 1] - v[0];
    cout << avg4 << "\n";

    return 0;
}
