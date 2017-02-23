#include "Goods.h"
#include <iostream>
using namespace std;


namespace Program
{
	Goods::Goods() //Конструктор без аргументов
	{
		carModel = "";
		priceHryvnia = 0.00;
		country = "";
	}

	Goods::Goods(std::string carModel, float priceHryvnia, std::string country)
	{
		Goods::setCarModel(carModel);
		Goods::setCountry(country);
		Goods::setPriceHryvnia(priceHryvnia);
	}


	Goods::~Goods()
	{
	}

	void Goods::setCarModel(std::string icarModel)
	{
		Goods::carModel = icarModel;
	}

	std::string Goods::getCarModel()
	{
		return Goods::carModel;
	}

	void Goods::setCountry(std::string icountry)
	{
		Goods::country = icountry;
	}

	std::string Goods::getCountry()
	{
		return Goods::country;
	}

	void Goods::setPriceHryvnia(float ipriceHryvnia)
	{
		while (ipriceHryvnia < 0)
		{
			cout << "Введите положительную цену!";
			std::cin >> ipriceHryvnia;
		}
			priceHryvnia = ipriceHryvnia;
	}

	/**float Goods::getPriceHryvnia()
	{
		return priceHryvnia;
	}**/

	//Вывод информации
	void Goods::info()
	{
		cout << endl;
		cout << "Марка: " << carModel << endl;
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
		if (carModel == "Toyota") {
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

