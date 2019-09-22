#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int result = 0;
		int n;
		scanf("%d", &n);
		int num[9] = { 0 };
		for (int j = 0; j < n; j++) {
			scanf("%d", &num[j]);
		}

		for (int j = 0; j < n; j++) {
			if (result == 0 || result == 1 || num[j] == 0 || num[j] == 1) {
				result += num[j];
			}
			else {
				result *= num[j];
			}
		}

		printf("#%d %d\n", i + 1, result);
	}
	return 0;
}