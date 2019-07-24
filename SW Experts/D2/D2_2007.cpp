#include <iostream>
#include <string>

using namespace std;

bool repeat(int k, string word) {
	for (int i = 0; i < word.length() - k - 1; i++) {
		if (word[i] != word[i + k]) {
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		string word;
		int length = 0;
		cin >> word;
		for (int k = 1; k <= 10; k++) {
			if (repeat(k, word)) {
				length = k;
				break;
			}
		}
		cout << "#" << i << " " << length << endl;
	}
	return 0;
}