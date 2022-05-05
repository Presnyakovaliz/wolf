#include <iostream>
using namespace std;

int division(int dividend, int divider) {
	int result = dividend / divider;
	return result;
}

int main()
{
	int dividend, divider;

	cout << "Enter numbers" << endl;
	cin >> dividend >> divider;

	if (divider != 0)
		cout << "Result:" << division (dividend, divider) << endl;
	else
		cout << "You can't devide by zero" << endl;

	return 0;
}
