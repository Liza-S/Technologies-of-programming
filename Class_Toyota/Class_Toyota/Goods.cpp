#include "Goods.h"
#include <iostream>
using namespace std;


namespace Program
{
	Goods::Goods() //Конструктор без аргументов
	{
		nameGood = "";
		priceHryvnia = 0.00;
		manufacturer = "";
	}

	Goods::Goods(char* inameGood, float ipriceHryvnia, char* imanufacturer)
	{
		nameGood = inameGood;
		manufacturer = imanufacturer;
		if (ipriceHryvnia < 0)
		{
			cout << "Введите положительную цену!";
		}
		else
			priceHryvnia = ipriceHryvnia;
	}


	Goods::~Goods()
	{
	}

	void Goods::setNameGood(char* inameGood)
	{
		nameGood = inameGood;
	}

	char* Goods::getNameGood() 
	{
		return nameGood;
	}

	void Goods::setManufactured(char* imanufacturer)
	{
		manufacturer = imanufacturer;
	}

	char* Goods::getManufactured()
	{
		return manufacturer;
	}

}

