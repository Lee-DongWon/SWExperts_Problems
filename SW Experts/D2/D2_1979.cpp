#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int sum = 0;
		int n, m;
		cin >> n >> m;
		int **arr = new int *[n];
		int **num = new int *[n];
		for (int j = 0; j < n; j++) {
			arr[j] = new int[n];
			num[j] = new int[n];
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cin >> arr[j][k];
				num[j][k] = 0;
			}
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				int start = k, end = k;
				while (start >= 0 && arr[j][start] == 1) {
					start--;
				}
				while (end < n && arr[j][end] == 1) {
					end++;
				}
				if (end - start == m + 1) {
					num[j][k]++;
				}

				start = j;
				end = j;
				while (start >= 0 && arr[start][k] == 1) {
					start--;
				}
				while (end < n && arr[end][k] == 1) {
					end++;
				}
				if (end - start == m + 1) {
					num[j][k]++;
				}
			}
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				sum += num[j][k];
			}
		}
		sum /= m;

		cout << "#" << i << " " << sum << endl;
	}
	return 0;
}