#include <iostream>

using namespace std;

int count(int n) {
	int cnt = 0;
	while (n > 0) {
		if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) {
			cnt++;
		}
		n /= 10;
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (count(i) == 0) {
			cout << i << " ";
		}
		else {
			for (int j = 0; j < count(i); j++) {
				cout << "-";
			}
			cout << " ";
		}
	}
	return 0;
}