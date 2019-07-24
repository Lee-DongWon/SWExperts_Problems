#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n;
		int cnt = 0;
		cin >> n;
		n *= 2;
		for (int j = 1; j <= 2 * n; j++) {
			if (n%j == 0) {
				if ((2 * n / j - j + 1) % 2 == 0) {
					cnt++;
				}
			}
		}

		cout << "#" << i << " " << cnt << endl;
	}
	return 0;
}