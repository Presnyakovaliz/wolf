#include <iostream>

using namespace std;

int main() {
int q;
cin >> q;
int array[q];
int sum = 0;
cout << "Quantity of numbers" << endl;
cout << "Enter numbers" << endl;
for (int i = 0; i < q; i++) {
		cin >> array[i];
		if (array[i] > 0) {
			sum = sum + array[i];
		};
	};

cout << sum;
return 0;
};
