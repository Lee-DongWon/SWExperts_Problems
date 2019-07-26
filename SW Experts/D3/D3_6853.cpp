#include <iostream>

using namespace std;

int getMax(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int x1, y1, x2, y2, n;
		int in = 0, edge = 0, out = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		int temp;

		temp = x2;
		x2 = getMax(x1, x2);
		if (x2 == x1) {
			x1 = temp;
		}

		temp = y2;
		y2 = getMax(y1, y2);
		if (y2 == y1) {
			y1 = temp;
		}

		cin >> n;
		for (int j = 0; j < n; j++) {
			int x, y;
			cin >> x >> y;
			if (x1 < x && x < x2) {
				if (y == y1 || y == y2) {
					edge++;
				}
				else if (y1 < y && y < y2) {
					in++;
				}
				else {
					out++;
				}
			}
			else if (x == x1 || x == x2) {
				if (y1 <= y && y <= y2) {
					edge++;
				}
				else {
					out++;
				}
			}
			else {
				out++;
			}
		}

		cout << "#" << i << " " << in << " " << edge << " " << out << endl;
	}
	return 0;
}