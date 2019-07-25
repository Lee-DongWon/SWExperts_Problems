#include <iostream>
#include <string>

using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		int t, length, num = 0, start = 0;
		string find_word, sentence;
		cin >> t;
		cin >> find_word;
		cin >> sentence;
		length = sentence.length();

		while (start < length) {
			int index = sentence.find(find_word, start);
			if (index != -1) {
				num++;
				start = index + 1;
			}
			else {
				break;
			}
		}

		cout << "#" << t << " " << num << endl;
	}
	return 0;
}