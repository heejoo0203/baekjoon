#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> pokemon_dict;
    vector<string> pokemon_list;

    for (int i = 1; i <= n; ++i) {
        string name;
        cin >> name;
        pokemon_dict[name] = i;
        pokemon_list.push_back(name);
    }

    for (int i = 0; i < m; ++i) {
        string query;
        cin >> query;

        if (isdigit(query[0])) {
            int index = stoi(query);
            cout << pokemon_list[index - 1] << "\n";
        } else {
            cout << pokemon_dict[query] << "\n";
        }
    }

    return 0;
}