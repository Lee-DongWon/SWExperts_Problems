#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n;
		cin >> n;
		int **triangle = new int *[n];
		for (int j = 0; j < n; j++) {
			triangle[j] = new int[j + 1];
			triangle[j][0] = 1;
			triangle[j][j] = 1;
			for (int k = 1; k < j; k++) {
				triangle[j][k] = triangle[j - 1][k - 1] + triangle[j - 1][k];
			}
		}

		cout << "#" << i << endl;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < j + 1; k++) {
				cout << triangle[j][k] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}