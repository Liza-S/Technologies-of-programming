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
		Tax(int workHours, int payOneHour, float income_tax) : Work(workHours, payOneHour) {
			Tax::setTax(income_tax);
		}
		void setTax(float);
		float getTax();
		~Tax();
	};
}


