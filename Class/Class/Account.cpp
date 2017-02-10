#include "Account.h"
#include <iostream>
using namespace std;

namespace Program
{
	Account::Account() //Конструктор без аргументов
	{
		Name = "";
		ID = "№0";
		Balance = 0;
	}

	Account::Account(char* id, char* name, ui balance) //Конструктор с аргументами
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
		cout << "Сколько вы хотите добавить: ";
		cin >> add;
		if (Balance + add < Max) {
			Balance += add;
			cout << "На ваш счет было добавлено " << add << endl;
		}
		else Balance = Balance;
	}

	// Обработка согласия на добавления денег
	void Account::AddAgBalance()
	{
		char addletter;
		cout << "Вы хотите добавить деньги на счет(y - да, n - нет)? ";
		cin >> addletter;
		if (addletter == 121) // 'y'
		{

			AddBalance(Balance);
			cout << "Ваш Баланс: " << getBalance() << endl;
		}
		else
			cout << "Ваш Баланс: " << getBalance() << endl;
	}

	void Account::TakeMoney(ui take)
	{
		cout << "Сколько вы хотите снять денег со счета: ";
		cin >> take;
		if (take <= Balance) {
			Balance -= take;
			cout << "С вашего счета было снято " << take << endl;
		}
	}
	// Обработка согласия на снятие денег со счета
	void Account::AgTakeMoney()
	{
		char takeletter;
		cout << "Вы хотите снять деньги со счета (y - да, n - нет)? ";
		cin >> takeletter;
		if (takeletter == 121) //'y'
		{
			TakeMoney(Balance);
			cout << "Ваш Баланс: " << getBalance() << endl;
		}
		else
			cout << "Ваш Баланс: " << getBalance() << endl;
	}
}


