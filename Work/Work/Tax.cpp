#include "Tax.h"
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

	float Tax::incomeTax()
	{
		float costWorkTax = 0.00;
		costWorkTax = costWork() - costWork() * (income_tax / 100);
		cout << "Стоимость работы с налогом: " << costWorkTax << endl;
		return costWorkTax;
	}

	Tax::~Tax()
	{
	}
}

