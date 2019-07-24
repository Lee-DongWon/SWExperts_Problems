#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		int ind = 0, num = 0;
		int arr[100001] = { 0, };
		cin >> n;
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			arr[abs(a)]++;
		}

		for (int i = 0; i < 100001; i++) {
			if (arr[i] != 0) {
				ind = i;
				num = arr[i];
				break;
			}
		}

		cout << "#" << i << " " << ind << " " << num << endl;
	}
	return 0;
}