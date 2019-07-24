#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, m;
		int sum = 0, max = 0, cnt = 0;
		cin >> n >> m;
		int **solve = new int *[n];
		for (int j = 0; j < n; j++) {
			solve[j] = new int[m];
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> solve[j][k];
				sum += solve[j][k];
			}
			if (max < sum) {
				max = sum;
				cnt = 1;
				sum = 0;
			}
			else if (max == sum) {
				cnt++;
				sum = 0;
			}
			else {
				sum = 0;
			}
		}

		cout << "#" << i << " " << cnt << " " << max << endl;
	}
	return 0;
}