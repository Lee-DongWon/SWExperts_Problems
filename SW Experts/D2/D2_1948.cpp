#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int result = 0;
		int month1, month2, day1, day2;
		int sum1 = 0, sum2 = 0;
		cin >> month1 >> day1 >> month2 >> day2;
		if (month1 == 1) {
			sum1 += day1;
		}
		else if (month1 == 2) {
			sum1 += 31 + day1;
		}
		else if (month1 == 3) {
			sum1 += 59 + day1;
		}
		else if (month1 == 4) {
			sum1 += 90 + day1;
		}
		else if (month1 == 5) {
			sum1 += 120 + day1;
		}
		else if (month1 == 6) {
			sum1 += 151 + day1;
		}
		else if (month1 == 7) {
			sum1 += 181 + day1;
		}
		else if (month1 == 8) {
			sum1 += 212 + day1;
		}
		else if (month1 == 9) {
			sum1 += 243 + day1;
		}
		else if (month1 == 10) {
			sum1 += 273 + day1;
		}
		else if (month1 == 11) {
			sum1 += 304 + day1;
		}
		else if (month1 == 12) {
			sum1 += 334 + day1;
		}

		if (month2 == 1) {
			sum2 += day2;
		}
		else if (month2 == 2) {
			sum2 += 31 + day2;
		}
		else if (month2 == 3) {
			sum2 += 59 + day2;
		}
		else if (month2 == 4) {
			sum2 += 90 + day2;
		}
		else if (month2 == 5) {
			sum2 += 120 + day2;
		}
		else if (month2 == 6) {
			sum2 += 151 + day2;
		}
		else if (month2 == 7) {
			sum2 += 181 + day2;
		}
		else if (month2 == 8) {
			sum2 += 212 + day2;
		}
		else if (month2 == 9) {
			sum2 += 243 + day2;
		}
		else if (month2 == 10) {
			sum2 += 273 + day2;
		}
		else if (month2 == 11) {
			sum2 += 304 + day2;
		}
		else if (month2 == 12) {
			sum2 += 334 + day2;
		}

		result = sum2 - sum1 + 1;
		cout << "#" << i << " " << result << endl;
	}
	return 0;
}