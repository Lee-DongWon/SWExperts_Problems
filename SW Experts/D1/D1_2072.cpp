#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int k = 1; k <= t; k++) {
		int sum = 0;
		int a;
		for (int i = 0; i < 10; i++) {
			cin >> a;
			if (a % 2 == 1) {
				sum += a;
			}
		}
		cout << "#" << k << " " << sum << endl;
	}
	return 0;
}