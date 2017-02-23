#include <iostream>
#include <conio.h>
#include "Goods.h"

using namespace std;

using Program::Goods;
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	std::string carModeL;
	std::double_t priceHryvniaL;
	std::string courtryL;

	std::cout << "Марка: ";
	getline(std::cin, carModeL);

	std::cout << "Страна: ";
	getline(std::cin, courtryL);

	std::cout << "Цена в гривне: ";
	std::cin >> priceHryvniaL;
	while (priceHryvniaL <= 0)
	{
		cout << "Введите положительную цену! ";
		std::cin >> priceHryvniaL;
	}


	Goods *car = new Goods(carModeL, priceHryvniaL, courtryL);
	car->setCarModel(carModeL);
	car->setPriceHryvnia(priceHryvniaL);
	car->setCountry(courtryL);
	car->info();
	car->setpriceDollar();
	car->increasePriceDollar();

	_getch();
	return 0;
}