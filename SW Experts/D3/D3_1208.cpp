#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int result, D;
vector <int> v1;
void cal() {
	result = (v1[0] - v1[99]);
	while (D--) {
		if ((v1[0] - v1[99]) > 1) {
			v1[0]--; v1[99]++;
			for (int i = 1; i < 99; i++) {
				if (!(v1[0] < v1[i])) break;

				if ((v1[0] < v1[i]) && (v1[i + 1] <= v1[0])) {
					int tmp = v1[0];
					v1.erase(v1.begin());
					v1.insert(v1.begin() + i, tmp);
					break;
				}
			}

			for (int i = 98; i >= 1; i--) {

				if (!(v1[99] >= v1[i])) break;

				if ((v1[99] >= v1[i]) && (v1[i - 1] >= v1[99])) {
					int tmp2 = v1[99];
					v1.pop_back();
					v1.insert(v1.begin() + i, tmp2);
					break;
				}
			}
			result = (v1[0] - v1[99]);
		}
		else break;
	}
}

int main() {
	int T = 10; int t = 1;

	while (T--) {
		cin >> D; result = 0; v1.clear();
		for (int i = 0; i < 100; i++) {
			int iii; cin >> iii; v1.push_back(iii);
		}

		sort(v1.begin(), v1.end(), greater<int>());

		cal();

		cout << "#" << t++ << " " << result << endl;
	}
	return 0;
}