#include <algorithm>
#include <iostream>

using namespace std;

long ans;
int n, t;
int ax[21];
int ay[21];
bool c[21];

void go(int cnt, int index) {
	if (cnt == n / 2) {
		long x = 0, y = 0;
		for (int i = 0; i < n; i++) {
			if (c[i]) {
				x -= ax[i];
				y -= ay[i];
			}
			else {
				x += ax[i];
				y += ay[i];
			}
		}
		ans = min(ans, x*x + y * y);
		return;
	}
	if (index == n) return;

	go(cnt, index + 1);
	c[index] = true;
	go(cnt + 1, index + 1);
	c[index] = false;
}

int main() {
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		ans = 9876543219876543;
		for (int j = 0; j < n; j++)
			cin >> ax[j] >> ay[j];
		go(0, 0);
		cout << "#" << i << " " << ans << endl;
	}
}