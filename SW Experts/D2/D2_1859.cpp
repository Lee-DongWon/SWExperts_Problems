#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		cin >> n;
		int *arr = new int[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int max = 0;
		long long sum = 0;

		for (int j = n - 1; j >= 0; j--) {
			if (max < arr[j]) {
				max = arr[j];
			}
			sum += (max - arr[j]);
		}
		cout << "#" << i << " " << sum << endl;
	}
	return 0;
}