#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long int n,left,right;
		cin >> n;
		if (n == 1) {
			left = 1;
			right = 1;
		}
		else {
			long long int order = (n - 1)*(n - 1) + 1;
			left = 2 * order - 1;
			right = 2 * n * n - 1;
		}


		cout << "#" << i + 1 << " " << left << " " << right << endl;
	}
	return 0;
}