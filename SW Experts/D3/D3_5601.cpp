#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "#" << i << " ";
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cout << "1/" << n << " ";
		}
		cout << endl;
	}
	return 0;
}