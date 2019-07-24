#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n, t;
		int max = 0;
		cin >> n >> t;
		int **arr = new int*[n];
		for (int j = 0; j < n; j++) {
			arr[j] = new int[n];
		}
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cin >> arr[j][k];
			}
		}

		for (int j = 0; j <= n - t; j++) {
			for (int k = 0; k <= n - t; k++) {
				int sum = 0;
				for (int a = j; a < j + t; a++) {
					for (int b = k; b < k + t; b++) {
						sum += arr[a][b];
					}
				}
				if (max < sum) {
					max = sum;
				}
			}
		}

		cout << "#" << i << " " << max << endl;
	}
	return 0;
}