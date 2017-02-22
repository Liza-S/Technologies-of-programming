#pragma once

namespace Program
{
	class Goods
	{
	private:
		char* nameGood; //Наименование товара
		float priceHryvnia;
		char* country;
		float const dollar = 27.40;
	public:
		Goods();
		Goods(char* inameGood, float ipriceHryvnia, char* imanufacturer);
		void	setNameGood(char*);
		char*	getNameGood();
		void	setCountry(char*);
		char*	getCountry();
		void	setPriceHryvnia(float);
		void	info();
		float	getPriceHryvnia();
		// цена в долларах
		void	setpriceDollar();
		// Увеличит цену для Toyota
		void	increasePriceDollar();
		~Goods();
	};

}


