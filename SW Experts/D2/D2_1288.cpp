#include <iostream>

using namespace std;

void count(int *arr, int n) {
	int temp = n;
	while (temp > 0) {
		arr[temp % 10]++;
		temp /= 10;
	}
	return;
}

bool notAllExist(int *arr) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == 0) {
			return true;
		}
	}
	return false;
}

int main() {
	int t;

	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n, temp;
		int result = 0;
		int arr[10] = { 0, };
		cin >> n;
		temp = n;
		while (notAllExist(arr)) {
			count(arr, n);
			result++;
			n += temp;
		}

		cout << "#" << i << " " << result * temp << endl;
	}
	return 0;
}