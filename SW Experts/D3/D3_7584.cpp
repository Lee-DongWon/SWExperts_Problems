#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		long long n;
		int result;
		cin >> n;
		n--;
		while (n % 2 != 0) {
			n = (n - 1) / 2;
		}

		if (n % 4 == 0) {
			result = 0;
		}
		else {
			result = 1;
		}
		cout << "#" << i << " " << result << endl;
	}
	return 0;
}