#pragma once

namespace Program
{
	typedef unsigned int ui;
	class Account
	{
	private:
		char* ID;
		char* Name;
		ui Balance;
		ui Max;
	public:
		Account();
		Account(char* id = "�", char* name = "", ui balance = 0);
		void	setID(char*);
		char*	getID();
		void	setName(char*);
		char*	getName();
		ui		getBalance();
		void	setBalance(ui);
		~Account();
	};
}
