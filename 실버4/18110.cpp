#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> score;

    for(int i = 0; i<n ; i++){
        int x;
        cin >> x;
        score.push_back(x);
    }
    sort(score.begin(),score.end());
    int k = round(n*0.15);

    int sum = 0;
    for(int i = k; i<n-k ; i++){
        sum += score[i];
    }

    int avg = 0;
    if(n-2*k > 0){
        avg = round(static_cast<double>(sum)/(n-2*k));
    }

    cout << avg;

    return 0;
}