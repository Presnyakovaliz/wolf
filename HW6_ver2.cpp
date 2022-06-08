#include <iostream>
using namespace std;

int plu(int x, int y) // сложение чисел
{
	return x + y;
}
int minu(int x, int y) // вычитание чисел
{
	return x - y;
}

int* arr_plu(int p, int l[], int h[]) // сложение чисел в массиве
{
	int* d = new int[p];
	for (int i = 0; i < p; i++) 
		d[i] = plu(l[i], h[i]);
			
	return d;
}
int* arr_minu(int p, int l[], int h[]) // вычитание чисел в массиве
{
	int* d = new int[p];
	for (int i = 0; i < p; i++) {
		d[i] = minu(l[i], h[i]);
	}
		
	return d;
}

int main()
{
	int num_1, num_2;
	char znak_1;
	cout << "Введите выражение:";
	cin >> num_1;
	cin >> znak_1;
	cin >> num_2;
	if (znak_1 == '+')
		cout << plu(num_1, num_2) << endl;
	else cout << minu(num_1, num_2) << endl;

	int n;
	char znak_2;
	cout << "Введите кол-во чисел в массиве: ";
	cin >> n;
	int a[n];
	int b[n];
	int* c;
	cout << "Введите числа первого массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Выберите операцию (+/-): ";
	cin >> znak_2;

	cout << "Введите числа второго массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	cout << "Ответ: ";

	if (znak_2 == '+')
		c = arr_plu(n, a, b);
	else
		c = arr_minu(n, a, b);
    
    for (int i = 0; i < n; i++)
      cout << c[i] << endl;
	delete c;
}