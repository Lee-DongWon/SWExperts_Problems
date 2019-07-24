#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "#" << i << endl;
		int n;
		cin >> n;
		int a1, a2, a3, a4, a5, a6, a7, a8;
		a1 = n / 50000;
		n %= 50000;
		a2 = n / 10000;
		n %= 10000;
		a3 = n / 5000;
		n %= 5000;
		a4 = n / 1000;
		n %= 1000;
		a5 = n / 500;
		n %= 500;
		a6 = n / 100;
		n %= 100;
		a7 = n / 50;
		n %= 50;
		a8 = n / 10;
		cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << " " << a7 << " " << a8 << endl;
	}
	return 0;
}