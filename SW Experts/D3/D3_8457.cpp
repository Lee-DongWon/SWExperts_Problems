#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num = 0;
		int n, b, e;
		cin >> n >> b >> e;
		int *sandClock = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> sandClock[j];
		}

		for (int j = 0; j < n; j++) {
			int temp = 0;
			while (temp < b - e) {
				temp += sandClock[j];
			}
			if (temp <= b + e) {
				num++;
			}
		}

		cout << "#" << i + 1 << " " << num << endl;
	}
	return 0;
}