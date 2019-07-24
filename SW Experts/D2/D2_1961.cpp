#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cout << "#" << i << endl;
		int n;
		cin >> n;
		int **arr = new int *[n];
		for (int j = 0; j < n; j++) {
			arr[j] = new int[n];
		}
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cin >> arr[j][k];
			}
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cout << arr[n - 1 - k][j];
			}
			cout << " ";
			for (int k = 0; k < n; k++) {
				cout << arr[n - 1 - j][n - 1 - k];
			}
			cout << " ";
			for (int k = 0; k < n; k++) {
				cout << arr[k][n - 1 - j];
			}
			cout << endl;
		}
	}
	return 0;
}