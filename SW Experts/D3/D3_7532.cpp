#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b, c;
		int year;
		cin >> a >> b >> c;
		year = a * 24 * 29 * 161 + b * 365 * 29 + c * 24 * 365 * 15;
		year = year % (24 * 29 * 365);
		if (year == 0) {
			year = 24 * 29 * 365;
		}
		cout << "#" << i << " " << year << endl;
	}
	return 0;
}