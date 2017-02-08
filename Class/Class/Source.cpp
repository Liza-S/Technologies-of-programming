#include <iostream>
#include <conio.h>
#include "Account.h"

using namespace std;

using Program::Account;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	Account a("¹11111", "Liza", 10000); 

	cout << "ID: " << a.getID() << endl;
	cout << "Name: " << a.getName() << endl;
	cout << "Balance: " << a.getBalance() << endl;

	_getch();
	return 0;
}