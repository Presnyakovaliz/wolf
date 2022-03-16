#include <iostream>
using namespace std;
int main() {
	int q;
	cout << "Введите количество чисел" << endl;
	cin >> q;
	int array[q];
	int min = array[1];
	int max = array[1];

	cout << "Введите числа" << endl;

	for (int i = 0; i < q; i++) {
		cin >> array[i];
		if (array[i] < min) {
			min = array[i];
		}
		else {
			max = array[i];
		};
	};

	for (int j = 0; j < q; j++) {
		if (array[j] == min) {
			cout << max << " ";
		}
		else {
			if (array[j] == max) {
				cout << min << " ";
			}
			else cout << array[j] << " ";
		};
	};

	return 0;
};
