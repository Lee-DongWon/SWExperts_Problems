#include <iostream>

using namespace std;

int main() {
	int a, b;
	if (a == 1) {
		if (b == 2) {
			cout << "B" << endl;
		}
		else {
			cout << "A" << endl;
		}
	}
	else if (a == 2) {
		if (b == 3) {
			cout << "B" << endl;
		}
		else {
			cout << "A" << endl;
		}
	}
	else {
		if (b == 1) {
			cout << "B" << endl;
		}
		else {
			cout << "A" << endl;
		}
	}
	return 0;
}