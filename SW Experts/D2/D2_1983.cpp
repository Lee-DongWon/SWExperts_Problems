#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, k;
		cin >> n >> k;
		int *score = new int[n];
		for (int j = 0; j < n; j++) {
			int a, b, c;
			int point;
			cin >> a >> b >> c;
			point = a * 35 + b * 45 + c * 20;
			score[j] = point;
		}
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (score[j] >= score[k - 1]) {
				cnt++;
			}
		}


		if (cnt <= n / 10) {
			cout << "#" << i << " " << "A+" << endl;
		}
		else if (cnt <= 2 * n / 10) {
			cout << "#" << i << " " << "A0" << endl;
		}
		else if (cnt <= 3 * n / 10) {
			cout << "#" << i << " " << "A-" << endl;
		}
		else if (cnt <= 4 * n / 10) {
			cout << "#" << i << " " << "B+" << endl;
		}
		else if (cnt <= 5 * n / 10) {
			cout << "#" << i << " " << "B0" << endl;
		}
		else if (cnt <= 6 * n / 10) {
			cout << "#" << i << " " << "B-" << endl;
		}
		else if (cnt <= 7 * n / 10) {
			cout << "#" << i << " " << "C+" << endl;
		}
		else if (cnt <= 8 * n / 10) {
			cout << "#" << i << " " << "C0" << endl;
		}
		else if (cnt <= 9 * n / 10) {
			cout << "#" << i << " " << "C-" << endl;
		}
		else {
			cout << "#" << i << " " << "D0" << endl;
		}

	}
	return 0;
}