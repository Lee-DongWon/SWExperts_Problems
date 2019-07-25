#include <iostream>

using namespace std;

int power(int a, int b) {
	if (b == 0) {
		return 1;
	}
	else {
		return power(a, b - 1)*a;
	}
}

int main() {
	for (int i = 0; i < 10; i++) {
		int t, result, a, b;
		cin >> t;
		cin >> a >> b;
		result = power(a, b);
		cout << "#" << t << " " << result << endl;
	}
	return 0;
}