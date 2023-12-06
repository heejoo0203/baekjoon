#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long findLength(long long start, long long end, long long target, const vector<long long>& cable){
    long long result = 0;

    while(start <= end){
        long long mid = (start + end) / 2;
        long long count = 0;

        for(int i = 0; i < cable.size() ; i++){
            count += cable[i] / mid;
        }

        if(count >= target){
            result = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return result;
}

int main(){
    int k,n;
    cin >> k >> n;
    
    vector<long long> cable(k);

    for(int i = 0; i<k; i++){
        int x;
        cin >> x;
        cable[i] = x;
    }

    sort(cable.begin(),cable.end(),greater<long long>());

    long long result = findLength(1, cable[0], n, cable);

    cout << result;

    return 0;
}