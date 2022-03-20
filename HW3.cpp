#include <iostream>
using namespace std;

int main() {
	int pos_1, pos_2;
	cout << "Your position:" << endl;
	cin >> pos_1 >> pos_2;
	int store_1 = pos_1;
	int store_2 = pos_2;
	cout << "You can go to:" << endl;
	
	while (pos_1 < 10) {
		pos_1 = pos_1 + 1;
		cout << pos_1 << " " << pos_2 << endl;
	};

	pos_1 = store_1;

	while (pos_1 > 1) {
		pos_1 = pos_1 - 1;
		cout << pos_1 << " " << pos_2 << endl;
	};

	pos_1 = store_1;

	while (pos_2 < 10) {
		pos_2 = pos_2 + 1;
		cout << pos_1 << " " << pos_2 << endl;
	};

	pos_2 = store_2;

	while (pos_2 > 1) {
		pos_2 = pos_2 - 1;
		cout << pos_1 << " " << pos_2 << endl;
	};

	pos_2 = store_2;

	while (pos_1 < 10 && pos_2 > 1) {
		pos_1 = pos_1 + 1;
		pos_2 = pos_2 - 1;
		cout << pos_1 << " " << pos_2 << endl;
	};

	pos_1 = store_1;
	pos_2 = store_2;

	while (pos_1 > 1 && pos_2 < 10) {
		pos_1 = pos_1 - 1;
		pos_2 = pos_2 + 1;

		cout << pos_1 << " " << pos_2 << endl;
	};

	pos_1 = store_1;
	pos_2 = store_2;

	while (pos_1 < 10 && pos_2 < 10) {
		pos_1 = pos_1 + 1;
		pos_2 = pos_2 + 1;
		cout << pos_1 << " " << pos_2 << endl;
	};

	pos_1 = store_1;
	pos_2 = store_2;

	while (pos_1 > 1 && pos_2 > 1) {
		pos_1 = pos_1 - 1;
		pos_2 = pos_2 - 1;
		cout << pos_1 << " " << pos_2 << endl;
	};

	return 0;
};
