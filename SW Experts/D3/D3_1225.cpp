#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		int t, dec = 1, temp;
		cin >> t;
		int arr[8];
		for (int j = 0; j < 8; j++) {
			cin >> arr[j];
		}

		while (arr[0] - dec > 0) {
			temp = arr[0] - dec;
			for (int j = 0; j < 7; j++) {
				arr[j] = arr[j + 1];
			}
			arr[7] = temp;
			dec++;
			if (dec > 5) {
				dec = 1;
			}
		}

		for (int j = 0; j < 7; j++) {
			arr[j] = arr[j + 1];
		}
		arr[7] = 0;

		cout << "#" << t << " ";
		for (int j = 0; j < 8; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}
	return 0;
}