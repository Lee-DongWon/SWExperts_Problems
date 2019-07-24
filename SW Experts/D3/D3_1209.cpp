#include <iostream>

using namespace std;

int main() {
	for (int x = 0; x < 10; x++) {
		int i;
		cin >> i;
		int arr[100][100] = { 0 };
		for (int a = 0; a < 100; a++) {
			for (int b = 0; b < 100; b++) {
				cin >> arr[a][b];
			}
		}
		int max = 0, sum = 0;
		for (int n = 0; n < 100; n++) {
			for (int m = 0; m < 100; m++) {
				sum += arr[n][m];
			}
			if (max < sum) {
				max = sum;
				sum = 0;
			}
			else {
				sum = 0;
			}
		}

		for (int n = 0; n < 100; n++) {
			for (int m = 0; m < 100; m++) {
				sum += arr[m][n];
			}
			if (max < sum) {
				max = sum;
				sum = 0;
			}
			else {
				sum = 0;
			}
		}

		for (int n = 0; n < 100; n++) {
			sum += arr[n][n];
		}
		if (max < sum) {
			max = sum;
			sum = 0;
		}
		else {
			sum = 0;
		}

		for (int n = 0; n < 100; n++) {
			sum += arr[n][99 - n];
		}
		if (max < sum) {
			max = sum;
			sum = 0;
		}
		else {
			sum = 0;
		}

		cout << "#" << i << " " << max << endl;
	}
	return 0;
}