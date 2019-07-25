#include <iostream>

using namespace std;

int getMax(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}

int main() {
	for (int a = 0; a < 10; a++) {
		int t, longestLen = 1;
		char arr[100][100];
		int len[100][100] = { 0, };

		cin >> t;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				int len1 = 0, len2 = 0, len3 = 0, len4 = 0, len5 = 0, len6 = 0;
				while (j - len1 >= 0 && j + len1 < 100 && arr[i][j - len1] == arr[i][j + len1]) {
					len1++;
				}
				while (j - len3 >= 0 && j + len3 < 100 && arr[i][j - len3] == arr[i][j + 1 + len3]) {
					len3++;
				}
				while (j - len4 >= 0 && j + len4 < 100 && arr[i][j - 1 - len4] == arr[i][j + len4]) {
					len4++;
				}
				while (i - len2 >= 0 && i + len2 < 100 && arr[i - len2][j] == arr[i + len2][j]) {
					len2++;
				}
				while (i - len5 >= 0 && i + len5 < 100 && arr[i - len5][j] == arr[i + 1 + len5][j]) {
					len5++;
				}
				while (j - len6 >= 0 && j + len6 < 100 && arr[i - 1 - len6][j] == arr[i + len6][j]) {
					len6++;
				}


				len[i][j] = getMax(getMax(getMax(2 * len1 - 1, 2 * len2 - 1), getMax(2 * len3, 2 * len4)), getMax(2 * len5, 2 * len6));
				if (longestLen < len[i][j]) {
					longestLen = len[i][j];
				}
			}
		}



		cout << "#" << t << " " << longestLen << endl;
	}
}