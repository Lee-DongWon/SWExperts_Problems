#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int remainder = 0;
		int n;
		char num[1];
		long sum = 0;
		string number;
		cin >> n >> number;
		for (int j = 0; j < number.length(); j++) {
			num[0] = number[j];
			sum += atoi(num);
		}
		remainder = sum % (n - 1);
		cout << "#" << i << " " << remainder << endl;
	}
	return 0;
}