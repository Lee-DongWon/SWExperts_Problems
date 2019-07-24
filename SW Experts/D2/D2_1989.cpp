#include <iostream>
#include <string>

using namespace std;

bool same(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		string word, reverse;
		cin >> word;
		for (int j = 0; j < word.length(); j++) {
			reverse[j] = word[word.length() - 1 - j];
		}

		if (same(word, reverse)) {
			cout << "#" << i << " 1" << endl;
		}
		else {
			cout << "#" << i << " 0" << endl;
		}
	}
	return 0;
}