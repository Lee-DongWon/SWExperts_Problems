#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int avg;
		int sum = 0;
		int a;
		for (int j = 0; j < 10; j++) {
			cin >> a;
			sum += a;
		}
		sum += 5;
		avg = sum / 10;

		cout << "#" << i << " " << avg << endl;
	}
	return 0;
}