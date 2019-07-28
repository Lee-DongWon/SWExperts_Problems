#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void changeToInt(string word, int *arr2, int index) {
	if (word == "ZRO") {
		arr2[index] = 0;
	}
	else if (word == "ONE") {
		arr2[index] = 1;
	}
	else if (word == "TWO") {
		arr2[index] = 2;
	}
	else if (word == "THR") {
		arr2[index] = 3;
	}
	else if (word == "FOR") {
		arr2[index] = 4;
	}
	else if (word == "FIV") {
		arr2[index] = 5;
	}
	else if (word == "SIX") {
		arr2[index] = 6;
	}
	else if (word == "SVN") {
		arr2[index] = 7;
	}
	else if (word == "EGT") {
		arr2[index] = 8;
	}
	else {
		arr2[index] = 9;
	}
}

void changeToString(int number, string *arr1, int index) {
	if (number == 0) {
		arr1[index] = "ZRO";
	}
	else if (number == 1) {
		arr1[index] = "ONE";
	}
	else if (number == 2) {
		arr1[index] = "TWO";
	}
	else if (number == 3) {
		arr1[index] = "THR";
	}
	else if (number == 4) {
		arr1[index] = "FOR";
	}
	else if (number == 5) {
		arr1[index] = "FIV";
	}
	else if (number == 6) {
		arr1[index] = "SIX";
	}
	else if (number == 7) {
		arr1[index] = "SVN";
	}
	else if (number == 8) {
		arr1[index] = "EGT";
	}
	else {
		arr1[index] = "NIN";
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		string nullString;
		int num;
		cin >> nullString >> num;

		string *arr1 = new string[num];
		int *arr2 = new int[num];

		for (int j = 0; j < num; j++) {
			cin >> arr1[j];
			changeToInt(arr1[j], arr2, j);
		}

		sort(arr2, arr2 + num);
		cout << nullString << endl;

		for (int j = 0; j < num; j++) {
			changeToString(arr2[j], arr1, j);
		}

		for (int j = 0; j < num; j++) {
			cout << arr1[j] << " ";
		}

		cout << endl;
	}
	return 0;
}