#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		string word;
		long result = 1;
		cin >> word;
		int len = word.length();
		int *possible = new int[len];
		if (word[0] != word[1]) {
			possible[0] = 2;
		}
		else {
			possible[0] = 1;
		}

		if (word[len - 2] != word[len - 1]) {
			possible[len - 1] = 2;
		}
		else {
			possible[len - 1] = 1;
		}

		for (int j = 1; j < len - 1; j++) {
			if (word[j - 1] == word[j]) {
				if (word[j] == word[j + 1]) {
					possible[j] = 1;
				}
				else {
					possible[j] = 2;
				}
			}
			else {
				if (word[j] == word[j + 1]) {
					possible[j] = 2;
				}
				else {
					if (word[j - 1] == word[j + 1]) {
						possible[j] = 2;
					}
					else {
						possible[j] = 3;
					}
				}
			}
		}

		for (int j = 0; j < len; j++) {
			result = result * possible[j];
			result %= 1000000007;
		}

		cout << "#" << i << " " << result << endl;
	}
	return 0;
}