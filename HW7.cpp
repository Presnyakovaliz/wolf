#include <iostream>
using namespace std;

struct divi
{
	int up;
	int down;
};

void socr(divi* a)         // сокращение дробей
{
	for (int i = a->up; i > 0; i--) {
		if ((a->up % i == 0) and (a->down % i == 0)) {
			a->up = a->up / i;
			a->down = a->down / i;
		}
	}
}

void sort(int t, int u[]) {     // сортировка
	int s;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			if (u[j] > u[j + 1]) {
				s = u[j];
				u[j] = u[j + 1];
				u[j + 1] = s;
			}
		}
	}
	for (int i = 0; i < t; i++)
		cout << u[i] << " ";
}
int main()
{
	divi v;
	cout << "Numerator:" << endl;
	cin >> v.up;
	cout << "Denominator:" << endl;
	cin >> v.down;
	socr(&v);
	cout << v.up << "/" << v.down << endl;
	int n;
	cout << "Size:" << endl;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cout << "Array:" << " ";
		cin >> a[i];
	}
	sort(n, a);
	return 0;
}
