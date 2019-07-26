#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, m, max = 0, eachScore = 0, num = 0;

		cin >> n >> m;
		int **result = new int *[n];
		for (int j = 0; j < n; j++) {
			result[j] = new int[m];
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> result[j][k];
			}
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				eachScore += result[j][k];
			}

			if (max < eachScore) {
				max = eachScore;
				num = 1;
			}
			else if (max == eachScore) {
				num++;
			}
			eachScore = 0;
		}
		cout << "#" << i << " " << num << " " << max << endl;
	}
	return 0;
}