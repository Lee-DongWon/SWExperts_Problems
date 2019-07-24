#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		int v = 0, s = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int a, b;
			cin >> a;
			if (a == 0) {
				s += v;
			}
			else if (a == 1) {
				cin >> b;
				v += b;
				s += v;
			}
			else {
				cin >> b;
				if (b >= v) {
					v = 0;
				}
				else {
					v -= b;
					s += v;
				}
			}
		}
		cout << "#" << i << " " << s << endl;
	}
	return 0;
}