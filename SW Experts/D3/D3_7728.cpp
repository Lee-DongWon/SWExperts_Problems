#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{

		int n;
		int cnt = 0;
		int arr[10] = { 0 };

		cin >> n;
		while (n > 0) {
			arr[n % 10]++;
			n /= 10;
		}

		for (int i = 0; i < 10; i++) {
			if (arr[i] != 0) {
				cnt++;
			}
			arr[i] = 0;
		}

		cout << "#" << test_case << " ";
		cout << cnt << endl;
	}
	return 0;
}