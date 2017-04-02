#pragma once
#include "Work.h"
namespace Program
{
	// Число  –  подоходный налог в процентах
	// Вычислить, сколько денег получит работник, если вычтут подоходный налог
	class Tax : public Work
	{
	private:
		float income_tax;
	public:
		Tax() : income_tax(0.00), Work() {};

		~Tax();
	};
}


