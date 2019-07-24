#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, cnt = 0;
		string word;
		cin >> n;
		int alphabet[26] = { 0, };
		for (int j = 0; j < n; j++) {
			cin >> word;
			if (word[0] >= 'A' && word[0] <= 'Z') {
				alphabet[word[0] - 'A']++;
			}
		}
		while (alphabet[cnt] != 0 && cnt <= 25) {
			cnt++;
		}
		cout << "#" << i << " " << cnt << endl;
	}
	return 0;
}