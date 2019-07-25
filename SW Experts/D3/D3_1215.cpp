#include <iostream>

using namespace std;

int main() {
	for (int t = 0; t < 10; t++) {
		int num = 0, length;
		char arr[8][8];
		cin >> length;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 9 - length; j++) {
				int temp = 0;
				for (int k = 0; k < length; k++) {
					if (arr[i][k + j] == arr[i][j + length - 1 - k]) {
						temp++;
					}
				}
				if (temp == length) {
					num++;
				}
			}
		}

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 9 - length; j++) {
				int temp = 0;
				for (int k = 0; k < length; k++) {
					if (arr[k + j][i] == arr[length + j - 1 - k][i]) {
						temp++;
					}
				}
				if (temp == length) {
					num++;
				}
			}
		}

		cout << "#" << t + 1 << " " << num << endl;
	}
	return 0;
}