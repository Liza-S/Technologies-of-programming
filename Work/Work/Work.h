﻿#pragma once

namespace Program
{
	// Параметры работы: количество часов работы и тариф оплаты за час работы
	// Общая стоимость работы 
	class Work
	{
	private:
		int workHours;
		int payOneHour;
	public:
		Work();
		Work(int workHours, int payOneHour);
		void setWorkHours(int);
		int getWorkHours();
		void setPayOneHour(int);
		int getPayOneHour();
		void info();

		// Общая стоимость работы
		int costWork();
		~Work();
	};
}