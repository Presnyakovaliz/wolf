#include <iostream>
#include <string>
using namespace std;

string check_login(string login, string login_try) {
	string result_log;
	if (login_try != login) 
	result_log = "Wrong login. Try again.";
	return result_log;
}

string check_pass(string password, string password_try) {
	string result_pass;
	if (password_try == password)
		result_pass = "Right password";
	else
		result_pass = "Wrong password. Try again.";
	return result_pass;
}

int main()
{
	string login, password, login_try, password_try;
	cout << "Create login:" << endl;
	cin >> login;
	cout << "Create password:" << endl;
	cin >> password;
	cout << "Your login:" << endl;
	cin >> login_try;
	
	cout << check_login(login, login_try) << endl;
	while (check_login(login, login_try) == "Wrong login. Try again.")
		cin >> login_try;

	cout << "Your password:" << endl;
	cin >> password_try;

	cout << check_pass(password, password_try) << endl;
	while (check_pass(password, password_try) == "Wrong password. Try again.") {
		for (int i = 0; i < 3; i++) {
			cin >> password_try;
			cout << check_pass(password, password_try) << endl;
		}
		if (check_pass(password, password_try) == "Right password")
			cout << check_pass(password, password_try) << endl;;
	}
}
