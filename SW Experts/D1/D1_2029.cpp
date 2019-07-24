#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int a, b;
		int c, d;

		cin >> a >> b;
		c = a / b;
		d = a % b;
		cout << "#" << i << " " << c << " " << d << endl;
	}
	return 0;
}