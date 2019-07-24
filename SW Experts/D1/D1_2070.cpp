#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int a, b;
		cin >> a >> b;

		if (a > b) {
			cout << "#" << i << " >" << endl;
		}
		else if (a == b) {
			cout << "#" << i << " =" << endl;
		}
		else {
			cout << "#" << i << " <" << endl;
		}
	}
	return 0;
}