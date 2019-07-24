#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, avg;
		int sum = 0, result = 0;
		cin >> n;
		int *hay = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> hay[j];
			sum += hay[j];
		}
		avg = sum / n;
		for (int j = 0; j < n; j++) {
			if (hay[j] >= avg) {
				result += (hay[j] - avg);
			}
		}

		cout << "#" << i << " " << result << endl;
	}
	return 0;
}