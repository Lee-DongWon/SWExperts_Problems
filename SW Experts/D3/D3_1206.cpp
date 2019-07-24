#include <iostream>

using namespace std;

int getMin(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	for (int i = 1; i <= 10; i++) {
		int house = 0;
		int length, temp = 0;
		cin >> length;
		int *height = new int[length];
		for (int j = 0; j < length; j++) {
			cin >> height[j];
		}
		for (int j = 0; j < length; j++) {
			if (j == 0) {
				temp = getMin(height[j] - height[j + 1], height[j] - height[j + 2]);
			}
			else if (j == 1) {
				temp = getMin(height[j] - height[j - 1], getMin(height[j] - height[j + 1], height[j] - height[j + 2]));
			}
			else if (j == length - 2) {
				temp = getMin(height[j] - height[j + 1], getMin(height[j] - height[j - 1], height[j] - height[j - 2]));
			}
			else if (j == length - 1) {
				temp = getMin(height[j] - height[j - 1], height[j] - height[j - 2]);
			}
			else {
				temp = getMin(getMin(height[j] - height[j + 1], height[j] - height[j + 2]), getMin(height[j] - height[j - 1], height[j] - height[j - 2]));
			}

			if (temp > 0) {
				house += temp;
			}
		}
		cout << "#" << i << " " << house << endl;
	}
	return 0;
}