#include "Goods.h"
#include <iostream>
using namespace std;


namespace Program
{
	Goods::Goods() //Конструктор без аргументов
	{
		nameGood = "";
		priceHryvnia = 0.00;
		country = "";
	}

	Goods::Goods(char* inameGood, float ipriceHryvnia, char* icountry)
	{
		nameGood = inameGood;
		country = icountry;
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

	void Goods::setCountry(char* icountry)
	{
		country = icountry;
	}

	char* Goods::getCountry()
	{
		return country;
	}

	void Goods::setPriceHryvnia(float ipriceHryvnia)
	{
		if (ipriceHryvnia < 0)
		{
			cout << "Введите положительную цену!";
		}
		else
			priceHryvnia = ipriceHryvnia;
	}

	float Goods::getPriceHryvnia()
	{
		return priceHryvnia;
	}

	//Вывод информации
	void Goods::info()
	{
		cout << "Наименование: " << nameGood << endl;
		cout << "Цена в гривне: " << priceHryvnia << endl;
		cout << "Страна-изготовитель: " << country << endl;
	}

	float priceDollar = 0.00;
	//Цена в долларах
	void Goods::setpriceDollar()
	{
		priceDollar = priceHryvnia / dollar;
		cout << "Цена в долларах: " << priceDollar << endl;
	}

	// Увеличить цену в долларах
	void Goods::increasePriceDollar() 
	{
		float add;
		if (nameGood == "Toyota") {
			cout << "На сколько вы хотите увеличить цену Toyota (в $): ";
			cin >> add;
			while (add <= 0)
			{
				cout << "Введите положительное число: ";
				cin >> add;
			}
			priceDollar = priceDollar + add;
			cout << "Вы увеличили цену на:" << add << "$" << endl;
			cout << "Цена в долларах: " << priceDollar << endl;
		}
		else
			cout << "Вы не можете увеличить цену, так как у вас нет Toyota. :(";
	}
}

