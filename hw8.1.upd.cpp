#include <iostream>
	using namespace std;

	double divide(int dividend, int divider)
	{
		if (divider == 0)
			throw "Division by zero!";
		return dividend / divider;
	}

	int main() {
		int dividend, divider;

		cout << "Enter numbers" << endl;
		cin >> dividend >> divider;

		try
		{
			double result = divide(dividend, divider);
			cout << result << endl;
		}

		catch (const char* message)
		{
			cout << message << endl;
		}
		cout << "The End..." << endl;
		return 0;
	}
