#include "Tax.h"
#include "Work.h"
#include <iostream>
using namespace std;

namespace Program
{
	void Tax::setTax(float iincome_tax)
	{
		Tax::income_tax = iincome_tax;
	}

	float Tax::getTax()
	{
		return Tax::income_tax;
	}

	int Tax::costWork()
	{
		int costWork = 0;
		costWork = (workHours * payOneHour) - (workHours * payOneHour) * (income_tax / 100);
		cout << "Стоимость работы с налогом: " << costWork << endl; 
		return costWork;
	}

	Tax::~Tax()
	{
	}
}