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
		ui const Max = 999999;
	public:
		Account();
		Account(char* id = "¹", char* name = "", ui balance = 0);
		void	setID(char*);
		char*	getID();
		void	setName(char*);
		char*	getName();
		ui		getBalance();
		void	setBalance(ui);
		~Account();
	};
}
