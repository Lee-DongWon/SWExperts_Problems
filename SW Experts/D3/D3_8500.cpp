#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int result =  0;
		int num;
		cin >> num;
		int *seat = new int[num];
		for (int j = 0; j < num; j++) {
			cin >> seat[j];
		}

		sort(seat, seat + num);

		result += seat[0];
		for (int j = 0; j < num - 1; j++) {
			result++;
			if (seat[j] > seat[j + 1]) {
				result += seat[j];
			}
			else {
				result += seat[j + 1];
			}
		}

		result++;
		result += seat[num - 1];

		cout << "#" << i+1 << " " << result << endl;
	}
	return 0;
}