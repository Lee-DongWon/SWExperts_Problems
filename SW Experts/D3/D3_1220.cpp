#include <iostream>

using namespace std;

int main() {
	for (int t = 1; t <= 10; t++) {
		int len, num = 0;
		cin >> len;
		int **arr = new int *[len];
		int *left = new int[len];
		for (int i = 0; i < len; i++) {
			arr[i] = new int[len];
			left[i] = 0;
		}
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < len; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < len; i++) {
			int temp = 0, NorS = 2;
			for (int j = 0; j < len; j++) {
				if (NorS + arr[j][i] != 3) {
					continue;
				}
				else {
					if (NorS == 1) {
						temp++;
					}
					NorS = 3 - NorS;
				}
			}
			left[i] = temp;
		}

		for (int i = 0; i < len; i++) {
			num += left[i];
		}

		cout << "#" << t << " " << num << endl;
	}
	return 0;
}