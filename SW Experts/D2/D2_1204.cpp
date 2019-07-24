#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int i, score;
		int max = 0, ind = 0;
		cin >> i;

		int num[101] = { 0, };

		for (int j = 0; j < 1000; j++) {
			cin >> score;
			num[score]++;
		}

		for (int j = 0; j <= 100; j++) {
			if (num[j] >= max) {
				max = num[j];
				ind = j;
			}
		}
		cout << "#" << i << " " << ind << endl;
	}
	return 0;
}