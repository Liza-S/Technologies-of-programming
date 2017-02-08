#include "Account.h"
#include <iostream>
using namespace std;

namespace Program
{
	Account::Account() //Коструктор без аргументами
	{
		Name = "";
		ID = "№0";
		Balance = 0;
	}

	Account::Account(char* id, char* name, ui balance) //Коструктор с аргументами
	{
		ID = id;
		Name = name;
		if (balance < Max)
			Balance = balance;
		else Balance = 0;
	}

	Account::~Account()
	{
	}

	void Account::setID(char* id)
	{
		ID = id;
	}

	char* Account::getID()
	{
		return ID;
	}

	void Account::setName(char *name)
	{
		Name = name;
	}

	char* Account::getName()
	{
		return Name;
	}

	ui Account::getBalance()
	{
		return Balance;
	}

	void Account::setBalance(ui b)
	{
		if (b < Max)
			Balance = b;
		else Balance = 0;
	}

	void  Account::AddBalance(ui add)
	{
		if (Balance + add < Max)
			Balance += add;
		else Balance = Balance;
	}

	// Обработка согласия на добавления денег
	void Account::AddAgBalance()
	{
		char addletter;
		cout << "Вы хотите добавить деньги на счет (y - да, n - нет)? ";
		cin >> addletter;
		if (addletter == 121)
		{
			AddBalance(100);
			cout << "Balance: " << getBalance() << endl;
		}
	}
}


