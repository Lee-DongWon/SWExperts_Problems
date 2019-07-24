#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		int a = 0, b = 0, c = 0, d = 0, e = 0;
		cin >> n;
		while (n % 2 == 0) {
			a++;
			n /= 2;
		}
		while (n % 3 == 0) {
			b++;
			n /= 3;
		}
		while (n % 5 == 0) {
			c++;
			n /= 5;
		}
		while (n % 7 == 0) {
			d++;
			n /= 7;
		}
		while (n % 11 == 0) {
			e++;
			n /= 11;
		}

		cout << "#" << i << " " << a << " " << b << " " << c << " " << d << " " << e << endl;
	}
	return 0;
}