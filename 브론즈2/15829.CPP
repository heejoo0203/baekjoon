#include <iostream>
#include <vector>
using namespace std;

const int r = 31;
const int M = 1234567891;

long long m31(int k){
    long long x=1;
    for(int i =0; i<k; i++){
        x = (x * r) % M;
    }
    return x;
}

int main(){
    int n;
    cin >> n;
    vector<int> word(n);

    string m;
    cin >> m;

    for(int i=0;i<n;i++){
        int l = (int)m[i] - (int)'a' + 1;
        word[i] = l;
    }

    long long sum =0;
    for(int i =0; i<n;i++){
        sum = (sum + word[i] * m31(i)) % M;
    }
    
    cout << sum << endl;

    return 0;
}