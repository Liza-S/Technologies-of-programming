#include "Tax.h"
#include <iostream>
using namespace std;

namespace Program
{
//::Tax()
//{
//}


	void Tax::setTax(float iincome_tax)
	{
		Tax::income_tax = iincome_tax;
	}

	float Tax::getTax()
	{
		return Tax::income_tax;
	}

	void Tax::incomeTax() 
	{

	}

	Tax::~Tax()
	{
	}
}

