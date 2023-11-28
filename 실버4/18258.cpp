#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    queue<int> q;
    for(int i = 0; i<n; i++){
        string query;
        cin >> query;

        if(query == "push"){
            int x;
            cin >> x;
            q.push(x);
        }

        else if(query == "pop"){
            if(!q.empty()){
                int x = q.front();
                cout << x << "\n";
                q.pop();
            }
            else{
                cout << -1 << "\n";
            }
        }

        else if(query == "size"){
            cout << q.size() << "\n";
        }

        else if(query == "empty"){
            if(!q.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << 1 << "\n";
            }
        }

        else if(query == "front"){
            if(!q.empty()){
                cout << q.front() << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }

        else if(query == "back"){
            if(!q.empty()){
                cout << q.back() << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}