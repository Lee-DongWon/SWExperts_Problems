#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int max = 0;
		int a, b;
		cin >> a >> b;
		int *arr1 = new int[a];
		int *arr2 = new int[b];
		for (int j = 0; j < a; j++) {
			cin >> arr1[j];
		}
		for (int j = 0; j < b; j++) {
			cin >> arr2[j];
		}

		int *arr = new int[abs(a - b) + 1];

		if (a < b) {
			for (int j = 0; j <= b - a; j++) {
				for (int k = 0; k < a; k++) {
					arr[j] += arr1[k] * arr2[j + k];
				}
			}
		}
		else {
			for (int j = 0; j <= a - b; j++) {
				for (int k = 0; k < b; k++) {
					arr[j] += arr2[k] * arr1[j + k];
				}
			}
		}
		for (int j = 0; j <= abs(b - a); j++) {
			if (max < arr[j]) {
				max = arr[j];
			}
		}

		cout << "#" << i << " " << max << endl;
	}
	return 0;
}