#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, m, temp;
		cin >> n >> m;
		if (n > m) {
			temp = n;
			n = m;
			m = temp;
		}
		cout << "#" << i << " ";
		for (int j = n + 1; j <= m + 1; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}