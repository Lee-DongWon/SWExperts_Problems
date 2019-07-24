#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int max = 0;
		int a;

		for (int j = 0; j < 10; j++) {
			cin >> a;
			if (a > max) {
				max = a;
			}
		}
		cout << "#" << i << " " << max << endl;
	}
	return 0;
}