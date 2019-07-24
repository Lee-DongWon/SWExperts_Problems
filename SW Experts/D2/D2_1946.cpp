#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, length = 0, enter = 0;
		char tempC;
		int tempI;
		char word[200];
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> tempC >> tempI;
			for (int k = length; k < length + tempI; k++) {
				word[k] = tempC;
			}
			length += tempI;
		}
		cout << "#" << i << endl;
		for (int j = 0; j < length; j++) {
			if (enter != 10) {
				cout << word[j];
				enter++;
			}
			else {
				cout << endl << word[j];
				enter = 1;
			}
		}

		if (length % 10 != 0) {
			cout << endl;
		}
	}
	return 0;
}