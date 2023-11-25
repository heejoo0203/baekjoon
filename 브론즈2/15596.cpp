#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int>& a) {
	int len;
	len = size(a);
	long long sum = 0;
	for(int i =0; i< len;i++){
		sum += a[i];
	}
	return sum;
}