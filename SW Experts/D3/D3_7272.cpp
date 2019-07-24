#include <iostream>
#include <string>

using namespace std;

int holeNum(char a) {
	if (a == 'C' || a == 'E' || a == 'F' || a == 'G' || a == 'H' || a == 'I' || a == 'J' || a == 'K' || a == 'L' || a == 'M' || a == 'N' || a == 'S' || a == 'T' || a == 'U' || a == 'V' || a == 'W' || a == 'X' || a == 'Y' || a == 'Z') {
		return 0;
	}
	else if (a == 'A' || a == 'D' || a == 'O' || a == 'P' || a == 'Q' || a == 'R') {
		return 1;
	}
	else {
		return 2;
	}
}

bool same(string word1, string word2) {
	if (word1.length() != word2.length()) {
		return false;
	}
	else {
		for (int j = 0; j < word1.length(); j++) {
			if (holeNum(word1.at(j)) != holeNum(word2.at(j))) {
				return false;
			}
		}
		return true;
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		string word1, word2;
		cin >> word1 >> word2;
		if (same(word1, word2)) {
			cout << "#" << i << " " << "SAME" << endl;
		}
		else {
			cout << "#" << i << " " << "DIFF" << endl;
		}
	}
	return 0;
}