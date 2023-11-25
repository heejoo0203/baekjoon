#include <iostream>
#include <algorithm>

using namespace std;

struct dot {
	int x;
	int y;
};

bool cmp(const dot& a, const dot& b) {
	if (a.y < b.y) {
		return true;
	}
	if (a.y == b.y) {
		if (a.x < b.x) {
			return true;
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	dot* arr = new dot[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}
}