#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int arr[10] = { 0 };
		int sum = 0;
		int avg = 0;
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 10);
		for (int j = 1; j < 9; j++) {
			sum += arr[j];
		}
		avg = (sum + 4) / 8;

		cout << "#" << i << " " << avg << endl;
	}
	return 0;
}