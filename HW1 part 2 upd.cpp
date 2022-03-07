#include <iostream> 
#include <string>

using namespace std;
// ф-я определяет знак числа
string define_sign(int num)
{
	string sign;
	if (num > 0)
		sign = "positive";
	else {
		if (num < 0)
			sign = "negative";
		else 
			sign = "zero";
	}
	return sign;
};

int main()
{
	int num; 
	cout << "Write your number" << endl;
	cin >> num;
	cout << "The number is " << define_sign(num);
}
