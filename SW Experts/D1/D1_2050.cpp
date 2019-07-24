#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		int year, month, day;
		cin >> n;

		year = n / 10000;
		month = (n % 10000) / 100;
		day = n % 100;
		if (month == 0 || month > 12) {
			cout << "#" << i << " -1" << endl;
		}
		else {
			if (month % 2 == 1) {
				if (day <= 0 || day > 31) {
					cout << "#" << i << " -1" << endl;
				}
				else {
					if (year >= 1000) {
						if (month >= 10) {
							if (day >= 10) {
								cout << "#" << i << " " << year << "/" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << year << "/" << month << "/0" << day << endl;
							}
						}
						else {
							if (day >= 10) {
								cout << "#" << i << " " << year << "/0" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << year << "/0" << month << "/0" << day << endl;
							}
						}
					}
					else if (100 <= year) {
						if (month >= 10) {
							if (day >= 10) {
								cout << "#" << i << " " << "0" << year << "/" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << "0" << year << "/" << month << "/0" << day << endl;
							}
						}
						else {
							if (day >= 10) {
								cout << "#" << i << " " << "0" << year << "/0" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << "0" << year << "/0" << month << "/0" << day << endl;
							}
						}
					}
					else if (year >= 10) {
						if (month >= 10) {
							if (day >= 10) {
								cout << "#" << i << " " << "00" << year << "/" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << "00" << year << "/" << month << "/0" << day << endl;
							}
						}
						else {
							if (day >= 10) {
								cout << "#" << i << " " << "00" << year << "/0" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << "00" << year << "/0" << month << "/0" << day << endl;
							}
						}
					}
					else {
						if (month >= 10) {
							if (day >= 10) {
								cout << "#" << i << " " << "000" << year << "/" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << "000" << year << "/" << month << "/0" << day << endl;
							}
						}
						else {
							if (day >= 10) {
								cout << "#" << i << " " << "000" << year << "/0" << month << "/" << day << endl;
							}
							else {
								cout << "#" << i << " " << "000" << year << "/0" << month << "/0" << day << endl;
							}
						}
					}
				}
			}
			else {
				if (month == 2) {
					if (day <= 0 || day > 28) {
						cout << "#" << i << " -1" << endl;
					}
					else {
						if (year >= 1000) {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
						else if (100 <= year) {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << "0" << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "0" << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << "0" << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "0" << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
						else if (year >= 10) {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << "00" << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "00" << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << "00" << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "00" << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
						else {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << "000" << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "000" << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << "000" << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "000" << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
					}
				}
				else {
					if (day <= 0 || day > 30) {
						cout << "#" << i << " -1" << endl;
					}
					else {
						if (year >= 1000) {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
						else if (100 <= year) {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << "0" << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "0" << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << "0" << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "0" << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
						else if (year >= 10) {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << "00" << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "00" << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << "00" << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "00" << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
						else {
							if (month >= 10) {
								if (day >= 10) {
									cout << "#" << i << " " << "000" << year << "/" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "000" << year << "/" << month << "/0" << day << endl;
								}
							}
							else {
								if (day >= 10) {
									cout << "#" << i << " " << "000" << year << "/0" << month << "/" << day << endl;
								}
								else {
									cout << "#" << i << " " << "000" << year << "/0" << month << "/0" << day << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}