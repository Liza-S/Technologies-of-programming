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
		cout << "Изготовитель: " << manufacturer << endl;
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

