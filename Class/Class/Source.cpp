#include <iostream>
#include <conio.h>
#include "Account.h"

using namespace std;

using Program::Account;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	Account a("�11111", "Liza", 10000); 

	cout << "ID: " << a.getID() << endl;
	cout << "���: " << a.getName() << endl;
	cout << "��� ������: " << a.getBalance() << endl;

	a.AddAgBalance();
	a.AgTakeMoney();
	_getch();
	return 0;
}