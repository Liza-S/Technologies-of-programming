#pragma once

#include <string>

namespace Program
{
	class Goods
	{
	private:
		std::string carModel;
		float priceHryvnia;
		std::string country;
		float const dollar = 27.40;
	public:
		Goods();
		Goods(std::string, float , std::string);
		void	setCarModel(std::string);
		std::string	getCarModel();
		void	setCountry(std::string);
		std::string	getCountry();
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


