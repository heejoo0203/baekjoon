#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		int n;
		cin >> n;
		int* score = new int[n];
		int sum = 0;
		for (int j = 0; j < n; j++) {
			cin >> score[j];
			sum += score[j];
		}
		float avg = (float)sum / n;
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (score[j] > avg) {
				count++;
			}
		}
		float per = (float)count / (float)n * 100;
		cout << fixed;
		cout.precision(3);
		cout << per << "%" << endl;
	}
}