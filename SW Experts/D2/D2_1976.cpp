#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int hour, hour1, hour2;
		int minute, minute1, minute2;
		cin >> hour1 >> minute1 >> hour2 >> minute2;

		minute = minute1 + minute2;
		hour = hour1 + hour2;

		if (minute >= 60) {
			minute -= 60;
			hour++;
		}

		hour %= 12;
		if (hour == 0) {
			hour = 12;
		}

		cout << "#" << i << " " << hour << " " << minute << endl;
	}
	return 0;
}