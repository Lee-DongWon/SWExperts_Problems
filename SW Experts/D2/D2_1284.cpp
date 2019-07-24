#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {

		int p, q, r, s, w;

		cin >> p >> q >> r >> s >> w;

		int price1 = p * w;
		int price2 = 0;
		if (r < w) {
			price2 = q + (w - r)*s;
		}
		else {
			price2 = q;
		}

		cout << "#" << i << " ";

		if (price1 < price2) {
			cout << price1 << endl;
		}
		else {
			cout << price2 << endl;
		}
	}
}