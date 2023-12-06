#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a;
    while(1){
        cin >> a;
        if(a == -1) break;
        vector<int> sub;
        for(int i = 1; i < a; i++){
            if(a%i == 0) sub.push_back(i);
        }
        int sum = 0;
        for(auto iter: sub){
            sum += iter;
        }
        if(sum == a){
            cout << a << " = ";
            for(int i = 0; i < sub.size() ; i++){
                cout << sub[i];
                if(i != sub.size() - 1){
                    cout << " + ";
                }
            }
            cout << "\n";
        }
        else{
            cout << a << " is NOT perfect."<<"\n";
        }
    }
    return 0;
}