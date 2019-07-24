#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		cout << "#" << test_case << " ";

		if (n == 1) {
			cout << arr[0] * arr[0] << endl;
		}
		else {
			sort(arr, arr + n);
			cout << arr[0] * arr[n - 1] << endl;
		}


	}
	return 0;
}