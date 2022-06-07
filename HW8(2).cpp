#include <iostream>
#include <string>
#include <limits>

using namespace std;

string user_log = "Liza";
string user_password = "hi";

bool login(string log) {
	string password;
	for (int i = 0; i < 3; i++) {
		cout << "Введите пароль:";
		cin >> password;
		
	}

	if (password != user_password)
		throw 1;
}

int main() {
	string log;
	cout << "Введите логин:";
	cin >> log;
	while (log != user_log) {
		cout << "Неверный логин, попробуйте еще раз" << endl;
		cin >> log;
	}

	try {
		login(log);
		cout << "Вход выполнен успешно";
	}

	catch (const int i) {
		if (i == 1)
			cout << "Трижды введен некорректный пароль" << endl;
	}
}
