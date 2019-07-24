#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n;
		cin >> n;
		int *arr = new int[n];
		int *sum = new int[n];
		int result = -1001;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			sum[j] = 0;
		}

		sum[0] = max(arr[0], 0);

		for (int j = 1; j < n; j++) {
			sum[j] = max(arr[j], arr[j] + sum[j - 1]);
			if (result < sum[j]) {
				result = sum[j];
			}
		}
		if (result < sum[0]) {
			result = sum[0];
		}
		cout << "#" << i << " " << result << endl;
	}
	return 0;
}