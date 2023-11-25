#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct point {
	int x;
	int y;
};

bool cmp(const point& p1, const point& p2) {
	if (p1.x != p2.x) return p1.x<p2.x;
	return p1.y < p2.y;
}

int main() {
	int n;
	cin >> n;
	vector<point>dot(n);
	for (int i = 0; i < n; i++) {
		cin >> dot[i].x >> dot[i].y;
	}
	sort(dot.begin(),dot.end(),cmp);
	for (int i = 0; i < n; i++) {
		cout << dot[i].x <<" "<< dot[i].y << "\n";
	}
	return 0;
}