#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence;
	cin >> sentence;
	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] >= 'a' && sentence[i] <= 'z') {
			sentence[i] = sentence[i] - 32;
		}
	}
	cout << sentence << endl;

	return 0;
}