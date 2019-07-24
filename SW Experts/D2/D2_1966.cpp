#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "#" << i << " ";
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + n);
		for (int j = 0; j < n; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}
	return 0;
}