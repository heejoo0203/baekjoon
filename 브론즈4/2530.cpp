#include <iostream>

using namespace std;

int main() {
	int h, m, s;
	int time;

	cin >> h >> m >> s >> time;

	int s_time = time % 60;
	time /= 60;
	int m_time = time % 60;
	int h_time = time / 60;

	s += s_time;
	if (s > 59) {
		s -= 60;
		m++;
	}
	m += m_time;
	if (m > 59) {
		m -= 60;
		h++;
	}
	h += h_time;
	while (h > 23) {
		h -= 24;
	}
	cout << h <<" "<< m <<" " << s;
}