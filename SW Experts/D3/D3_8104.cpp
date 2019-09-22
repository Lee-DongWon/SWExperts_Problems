#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		
		if (n % 2 == 0) {
			cout << "#" << i + 1 << " ";
			for (int j = 0; j < k; j++) {
				cout << (n)*(n*k + 1) / 2 << " ";
			}
			cout << endl;
		}
		else {
			cout << "#" << i + 1 << " ";
			for (int j = 0; j < k; j++) {
				cout << ((n-1)*((n-1)*k + 1) / 2) + n*k - k + j + 1 << " ";
			}
			cout << endl;
		}

	}
	return 0;
}