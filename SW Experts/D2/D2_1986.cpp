#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		int result;
		cin >> n;
		if (n % 2 == 1) {
			result = (n + 1) / 2;
		}
		else {
			result = (n / 2)*(-1);
		}

		cout << "#" << i << " " << result << endl;
	}
	return 0;
}