#include <iostream>

using namespace std;

int cnt0(int a){
    int x = 0, y = 1, sum = 0;
    if(a == 0) return y;
    if(a == 1) return x;
    for(int i = 2; i<=a;i++){
        sum = x+y;
        y = x;
        x = sum;
    }
    return sum;
}
int cnt1(int a){
    int x = 0, y = 1, sum = 0;
    if(a == 0) return x;
    if(a == 1) return y;
    for(int i = 2; i<=a;i++){
        sum = x+y;
        x = y;
        y = sum;
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i = 0; i<t; i++){
        int a;
        cin >> a;
        cout << cnt0(a) << " "<< cnt1(a) << "\n";
    }
    return 0;
}