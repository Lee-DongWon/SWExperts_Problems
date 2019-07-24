#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int hour1, hour2, minute1, minute2, second1, second2, hour, minute, second;
		string time1, time2;
		cin >> time1;
		cin >> time2;

		char *change = new char[2];

		change[0] = time1[0];
		change[1] = time1[1];
		hour1 = atoi(change);

		change[0] = time1[3];
		change[1] = time1[4];
		minute1 = atoi(change);

		change[0] = time1[6];
		change[1] = time1[7];
		second1 = atoi(change);

		change[0] = time2[0];
		change[1] = time2[1];
		hour2 = atoi(change);

		change[0] = time2[3];
		change[1] = time2[4];
		minute2 = atoi(change);

		change[0] = time2[6];
		change[1] = time2[7];
		second2 = atoi(change);

		second = second2 - second1;
		minute = minute2 - minute1;
		hour = hour2 - hour1;
		if (second < 0) {
			second += 60;
			minute--;
		}
		if (minute < 0) {
			minute += 60;
			hour--;
		}
		if (hour < 0) {
			hour += 24;
		}

		if (hour >= 0 && hour <= 9) {
			if (minute < 10) {
				if (second < 10) {
					cout << "#" << i << " 0" << hour << ":0" << minute << ":0" << second << endl;
				}
				else {
					cout << "#" << i << " 0" << hour << ":0" << minute << ":" << second << endl;
				}
			}
			else {
				if (second < 10) {
					cout << "#" << i << " 0" << hour << ":" << minute << ":0" << second << endl;
				}
				else {
					cout << "#" << i << " 0" << hour << ":" << minute << ":" << second << endl;
				}
			}
		}
		else {
			if (minute < 10) {
				if (second < 10) {
					cout << "#" << i << " " << hour << ":0" << minute << ":0" << second << endl;
				}
				else {
					cout << "#" << i << " " << hour << ":0" << minute << ":" << second << endl;
				}
			}
			else {
				if (second < 10) {
					cout << "#" << i << " " << hour << ":" << minute << ":0" << second << endl;
				}
				else {
					cout << "#" << i << " " << hour << ":" << minute << ":" << second << endl;
				}
			}
		}

	}
	return 0;
}