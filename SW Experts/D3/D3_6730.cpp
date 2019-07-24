#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int upMax = 0, downMax = 0;
		int n;
		cin >> n;
		int *hard = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> hard[j];
		}
		for (int j = 0; j < n - 1; j++) {
			if (hard[j] < hard[j + 1]) {
				if (upMax < hard[j + 1] - hard[j]) {
					upMax = hard[j + 1] - hard[j];
				}
			}
			else {
				if (downMax < hard[j] - hard[j + 1]) {
					downMax = hard[j] - hard[j + 1];
				}
			}
		}

		cout << "#" << i << " " << upMax << " " << downMax << endl;
	}
	return 0;
}