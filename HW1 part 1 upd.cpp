#include <iostream>

using namespace std;

// ф-я ищет корни уравнения
int roots(int a, int b, int c)
{
	return (c - b) / a;
};

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << roots(a, b, c);
}
