#pragma once

namespace Program
{
	class Goods
	{
	private:
		char* carModel;
		float priceHryvnia;
		char* country;
		float const dollar = 27.40;
	public:
		Goods();
		Goods(char* icarModel, float ipriceHryvnia, char* imanufacturer);
		void	setCarModel(char*);
		char*	getCarModel();
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


