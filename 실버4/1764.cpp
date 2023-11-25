#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    std::cin >> N >> M;

    set<string> unheard;
    set<string> unseen;

    for (int i = 0; i < N; ++i) {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < M; ++i) {
        string name;
        cin >> name;
        unseen.insert(name);
    }

    vector<string> result;

    for (const auto& name : unheard) {
        if (unseen.find(name) != unseen.end()) {
            result.push_back(name);
        }
    }

    cout << result.size() << '\n';
    sort(result.begin(), result.end());
    for (const auto& name : result) {
        cout << name << '\n';
    }

    return 0;
}