#include <iostream> 
#include <string> 

using namespace std;
// функция определяет, все ли числа положительные
string define_sign(int num, string sign, int count) {
    if (count == 1)
	sign = "not positive";
	else sign = "positive";
	return sign;
};

int main() {
	int num;
	int count = 0;
	string sign;
	do {
		cin >> num;
		if (num < 0) {
			count = 1;
		};
	} 
	while (num != 0);
	cout << define_sign(num, sign, count);
};
